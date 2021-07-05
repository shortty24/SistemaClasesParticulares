#include "InscripcionController.h"
#include "CursoController.h"
#include "AlumnoController.h"
#include "ProfesorController.h"
using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;
//Comentario Inscripcion
InscripcionController::InscripcionController() {
	this->listaInscripcion = gcnew List<Inscripcion^>();
	this->objConexion = gcnew SqlConnection();
}
void InscripcionController::AbrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();
}
void InscripcionController::CerrarConexion() {
	this->objConexion->Close();
}

List<Inscripcion^>^ InscripcionController::InscripcionesxAlumno(String^ datoAlumno) {
	this->listaInscripcion->Clear();
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ dniProfesor = palabras[1];
		String^ nombreCurso = palabras[2];
		String^ horaInscripion = palabras[3];
		String^ fechaInscripion = palabras[4];
		int horasPedidas = Convert::ToInt32(palabras[5]);
		String^ horaInicio = palabras[6];
		String^ fechaClase = palabras[7];
		String^ codigoIns = palabras[8];

		if (datoAlumno == dniAlumno) {
			AlumnoController^ gestorAlumno = gcnew AlumnoController();
			Alumno^ objAlumno = gestorAlumno->buscaAlumnoxDNI(dniAlumno);
			ProfesorController^ gestorProfesor = gcnew ProfesorController();
			Profesor^ objProfesor = gestorProfesor->buscaProfesorxDNI(dniProfesor);
			CursoController^ gestorCurso = gcnew CursoController();
			Curso^ objCurso = gestorCurso->CursoDisponiblexNombrexProfesor(nombreCurso,objProfesor->objUsuario);
			Inscripcion^ objIns = gcnew Inscripcion(objAlumno, objCurso, horaInscripion, fechaInscripion, horasPedidas, horaInicio, fechaClase, codigoIns);
			this->listaInscripcion->Add(objIns);
		}
	}
	return this->listaInscripcion;
}

List<Inscripcion^>^ InscripcionController::InscripcionesxAlumno_BD(String^ datoAlumno) {
	this->listaInscripcion->Clear();
	AbrirConexion();
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from InscripcionesProyecto where DNI='" + datoAlumno + "';";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	while (objData1->Read()) {
		String^ dniAlumno = safe_cast<String^>(objData1["DNIAlumno"]);
		String^ dniProfesor = safe_cast<String^>(objData1["DNIProfesor"]);
		String^ nombreCurso = safe_cast<String^>(objData1["Curso"]);
		String^ horaInscripion = safe_cast<String^>(objData1["HoraInscripcion"]);
		String^ fechaInscripion = safe_cast<String^>(objData1["FechaInscripcion"]);
		int horasPedidas = safe_cast<int>(objData1["HorasPedidas"]);
		String^ horaInicio = safe_cast<String^>(objData1["HoraClase"]);
		String^ fechaClase = safe_cast<String^>(objData1["FechaClase"]);
		int codigoIns = safe_cast<int>(objData1["CodigoInscripcion"]);
		String^ codigoString = Convert::ToString(codigoIns);

		AlumnoController^ gestorAlumno = gcnew AlumnoController();
		Alumno^ objAlumno = gestorAlumno->buscaAlumnoxDNI(dniAlumno);
		ProfesorController^ gestorProfesor = gcnew ProfesorController();
		Profesor^ objProfesor = gestorProfesor->buscaProfesorxDNI(dniProfesor);
		CursoController^ gestorCurso = gcnew CursoController();
		Curso^ objCurso = gestorCurso->CursoDisponiblexNombrexProfesor(nombreCurso, objProfesor->objUsuario);
		Inscripcion^ objIns = gcnew Inscripcion (objAlumno, objCurso, horaInscripion, fechaInscripion, horasPedidas, horaInicio, fechaClase, codigoString);
		this->listaInscripcion->Add(objIns);
	}
	objData1->Close();
	CerrarConexion();
	return this->listaInscripcion;
}

void InscripcionController::GuardarInscripcion(String^ diaNuevo, String^ horaInicioNuevo, String^ tiempoPedidoNuevo, String^ nombreDelCursoNuevo, String^ dniProfesorNuevo, String^ dniAlumnoNuevo, String^ fechaInscripcionNuevo, String^ horaInscripcionNuevo) {
	List<String^>^ listaTextoInscrip = gcnew List<String^>();
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	String^ lineaAgregar;
	int k = 0;
	int ultimoCodigo;
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ dniProfesor = palabras[1];
		String^ nombreCurso = palabras[2];
		String^ horaInscripion = palabras[3];
		String^ fechaInscripion = palabras[4];
		int horasPedidas = Convert::ToInt32(palabras[5]);
		String^ horaInicio = palabras[6];
		String^ fechaClase = palabras[7];
		String^ codigoIns = palabras[8];
		ultimoCodigo = Convert::ToInt32(codigoIns);

		lineaAgregar = dniAlumno + ";" + dniProfesor + ";" + nombreCurso + ";" + horaInscripion + ";" + fechaInscripion + ";" + Convert::ToString(horasPedidas) + ";" + horaInicio + ";" + fechaClase + ";" + codigoIns;
		listaTextoInscrip->Add(lineaAgregar);
	}
	String^ codigoNuevo = Convert::ToString(ultimoCodigo + 1);

	lineaAgregar = dniAlumnoNuevo + ";" + dniProfesorNuevo + ";" + nombreDelCursoNuevo + ";" + horaInscripcionNuevo + ";" + fechaInscripcionNuevo + ";" + tiempoPedidoNuevo + ";" + horaInicioNuevo + ";" + diaNuevo + ";" + codigoNuevo;
	listaTextoInscrip->Add(lineaAgregar);
	File::WriteAllLines("Inscripciones.txt", listaTextoInscrip);
}

void InscripcionController::GuardarInscripcion_BD(String^ diaNuevo, String^ horaInicioNuevo, String^ tiempoPedidoNuevo, String^ nombreDelCursoNuevo, String^ dniProfesorNuevo, String^ dniAlumnoNuevo, String^ fechaInscripcionNuevo, String^ horaInscripcionNuevo) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	int horasPedidas = Convert::ToInt32(tiempoPedidoNuevo);
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Insert into InscripcionesProyecto(DNIAlumno,DNIProfesor,Curso,HoraInscripcion,FechaInscripcion,HorasPedidas,HoraClase,FechaClase) values ('" + dniAlumnoNuevo + "','" + dniProfesorNuevo + "','" + nombreDelCursoNuevo + "','" + horaInscripcionNuevo + "','" + fechaInscripcionNuevo + "','" + tiempoPedidoNuevo + "','" + horaInicioNuevo + "','" + diaNuevo + "');";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

String^ InscripcionController::EstadoBonoxAlumno(String^ dniAlumnoBuscar) {
	array<String^>^ lineas = File::ReadAllLines("Bonus.txt");

	String^ separadores = ";";
	String^ estado;
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ estadoBono = palabras[1];
		if (dniAlumno == dniAlumnoBuscar) {
			estado = estadoBono;
			break;
		}
	}
	return estado;

}
String^ InscripcionController::EstadoBonoxAlumno_BD(String^ dniAlumnoBuscar) {
	AbrirConexion();
	String^ estado;
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from Bonus where DNI='" + dniAlumnoBuscar + "';";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	if (objData1->Read()) {
		estado = safe_cast<String^>(objData1["Estado"]);
	}
	objData1->Close();
	CerrarConexion();
	return estado;
}
void InscripcionController::ModificaEstadoBonoxAlumno(String^ dniAlumnoBuscar) {
	List<String^>^ listaTextoBonos = gcnew List<String^>();
	array<String^>^ lineas = File::ReadAllLines("Bonus.txt");

	String^ separadores = ";";
	String^ lineaAgregar;
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ estadoBono = palabras[1];

		if (dniAlumno == dniAlumnoBuscar) {
			estadoBono = "Canjeado";
		}
		lineaAgregar = dniAlumno + ";" + estadoBono;
		listaTextoBonos->Add(lineaAgregar);
		File::WriteAllLines("Bonus.txt", listaTextoBonos);
	}

}
void InscripcionController::ModificaEstadoBonoxAlumno_BD(String^ dniAlumnoBuscar) {
	AbrirConexion();
	String^ estado;
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "update Bonus set Estado = 'Canjeado' where DNI='" + dniAlumnoBuscar + "';";
}
String^ InscripcionController::codigoInsxProfesorxDiaxHora(String^ dniProfesorBuscar, String^ diafechaClase,String^horaInicioBuscar){
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	String^ codigoInsEncontrado;
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ dniProfesor = palabras[1];
		String^ nombreCurso = palabras[2];
		String^ horaInscripion = palabras[3];
		String^ fechaInscripion = palabras[4];
		int horasPedidas = Convert::ToInt32(palabras[5]);
		String^ horaInicio = palabras[6];
		String^ fechaClase = palabras[7];
		String^ codigoIns = palabras[8];

		if (dniProfesorBuscar == dniProfesor && diafechaClase == fechaClase && horaInicioBuscar == horaInicio) {
			codigoInsEncontrado = codigoIns;
			break;
		}
	}
	return codigoInsEncontrado;
}