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