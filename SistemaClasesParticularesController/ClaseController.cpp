#include "ClaseController.h"
#include "PagoController.h"
#include "CursoController.h"
#include "AlumnoController.h"
#include "ProfesorController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

ClaseController::ClaseController() {
	this->listaClases = gcnew List<Clase^>();
	this->objConexion = gcnew SqlConnection();
}

/*Métodos con base de datos*/
void ClaseController::AbrirConexion() {
	/*La cadena conexion está compuesto de: Servidor BD, nombre de BD, usuario de BD y contraseña de BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); /*Ya establecí la conexión con la BD*/
}

void ClaseController::CerrarConexion() {
	this->objConexion->Close();
}
void ClaseController::ProgramarClaseBD(String^ CodigoInscripcion) {


	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();

	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "UPDATE ClasesProyecto SET EstadoLink='programada' where CodigoClase='" + CodigoInscripcion + "';";

	objQuery->ExecuteNonQuery();

	CerrarConexion();
}

List<Clase^>^ ClaseController::ClasesProgramadasxProfesorBD(String^ dniProfesorBuscar) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	PagoController^ objGestorPago = gcnew PagoController();
	List<Clase^>^ listaClases = gcnew List<Clase^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto where DNIProfesor= '" + dniProfesorBuscar + "' and EstadoLink='programada' order by FechaClase;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link= safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		Pago^ objPago = objGestorPago->buscarPagoxCodigoBD(CodigoClase);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link, objPago, EstadoLink, EstadoPagoProfesor);
		listaClases->Add(objClase);
	}
	objData->Close();
	CerrarConexion();

	return listaClases;
}

Clase^ ClaseController::obtenerProximaClase(String^ DniProfesor) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	Clase^ objClase=nullptr;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select TOP 1 * from ClasesProyecto where DNIProfesor= '" + DniProfesor+ "'and EstadoLink='programada' order by FechaClase;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link);
	}
	objData->Close();
	CerrarConexion();
	return objClase;
}

Clase^ ClaseController::obtenerProximaClaseAlumno_BD(String^ DniAlumno) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	Clase^ objClase = nullptr;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select TOP 1 * from ClasesProyecto where DNIAlumno= '" + DniAlumno + "' order by FechaClase desc;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	if (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link);
	}
	objData->Close();
	CerrarConexion();
	return objClase;
}
Clase^ ClaseController::obtenerClaseSeleccionadaBD(int codigo) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	PagoController^ objGestorPago = gcnew PagoController();
	Clase^ objClase;

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto where CodigoClase="+ codigo+" order by FechaClase;";

	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		Pago^ objPago = objGestorPago->buscarPagoxCodigoBD(CodigoClase);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link, objPago, EstadoLink, EstadoPagoProfesor);
	}
	objData->Close();
	CerrarConexion();

	return objClase;
}

void ClaseController::actualizarClaseBD(Clase^ ClaseSeleccionada) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "UPDATE ClasesProyecto "+  
							"SET EstadoLink = 'finalizada' "+
							"WHERE CodigoClase ="+ ClaseSeleccionada->objPago->objInscripcion->codigoIns+";";

	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

List<String^>^ ClaseController::obtenerListaCursosPedidos(String^ dniProfesorBuscar) {
	List<String^>^ listaCurso = gcnew List<String^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto where DNIProfesor='"+ dniProfesorBuscar +"' and EstadoLink='programada' or EstadoLink='finalizada';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ Curso = safe_cast<String^>(objData[2]);
		listaCurso->Add(Curso);
	}
	objData->Close();
	CerrarConexion();

	return listaCurso;
}

Clase^ClaseController::BuscarClasexCodigoPagoBD(String^ CodigoInscripcion) {
	Clase^ ObjClaseEncontrado;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from PagosProyecto PP, InscripcionesProyecto IPN,Personas P where PP.CodigoInscripcion=IPN.CodigoInscripcion and IPN.CodigoInscripcion='"+ CodigoInscripcion +"' and P.DNI= IPN.DNIAlumno;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	if (objData->Read()) {
		String^ DniAlumno = safe_cast<String^>(objData[6]);
		String^ DniProfesor = safe_cast<String^>(objData[7]);
		String^ Curso = safe_cast<String^>(objData[8]);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[12]));
		DateTime FechaClase = safe_cast<DateTime>(objData[13]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ objLink = "-";
		int CodigoInscripcion = safe_cast<int>(objData[0]);
		String^ EstadoLink= safe_cast<String^>(objData[5]);
		String^ EstadoPagoProfesor = "";
		ObjClaseEncontrado = gcnew Clase(DniAlumno,DniProfesor, Curso, HoraClase, fechaInsTR, objLink,CodigoInscripcion, EstadoLink, EstadoPagoProfesor);
	}
	objData->Close();
	CerrarConexion();

	return ObjClaseEncontrado;

}
void ClaseController::crearclaseBD(Clase^ objClase) {

	//Inscripcion^ objInscripcion = objGestor->ObtenerObjetoInscripcionxCodigoPago(codigopago);
	//PagoController^ objGestorPago = gcnew PagoController();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	
	objQuery->CommandText = "Insert into ClasesProyecto values('"+ objClase->DniAlumno +"','" + objClase->DniProfesor+ "','" + objClase->NombreCurso + "','" + objClase->horaClase + "','" + objClase->fechaClase + "','" + objClase->objLink + "','" + objClase->CodigoInscripcion + "','" + objClase->EstadoLink + "','por pagar');";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}
void ClaseController::enviarlinkBD(String^ linkclase, int codigoIns) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "UPDATE ClasesProyecto " + "SET Link = '"+ linkclase +"' WHERE Link ='-' and CodigoClase="+codigoIns+";";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

}

List<Clase^>^ ClaseController::ClasesProgramadasxNombrexDiaBD(String^ dniProfesorBuscar, String^ nombreBuscar, String^ fechaBuscar) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	PagoController^ objGestorPago = gcnew PagoController();
	List<Clase^>^ listaClases = gcnew List<Clase^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto cp, Personas p where cp.DNIProfesor='"+ dniProfesorBuscar +"' and p.Nombre='"+ nombreBuscar +"' and cp.FechaClase='"+ fechaBuscar +"'and cp.DNIAlumno=p.DNI order by FechaClase;";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		Pago^ objPago = objGestorPago->buscarPagoxCodigoBD(CodigoClase);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link, objPago, EstadoLink, EstadoPagoProfesor);
		listaClases->Add(objClase);
	}
	objData->Close();
	CerrarConexion();

	return listaClases;
}

List<Clase^>^ ClaseController::ClasesProgramadasxDiaBD(String^ dniProfesorBuscar, String^ fecha) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	PagoController^ objGestorPago = gcnew PagoController();
	List<Clase^>^ listaClases = gcnew List<Clase^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto cp where cp.DNIProfesor='"+ dniProfesorBuscar +"' and cp.FechaClase='"+ fecha +"' order by FechaClase;";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		Pago^ objPago = objGestorPago->buscarPagoxCodigoBD(CodigoClase);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link, objPago, EstadoLink, EstadoPagoProfesor);
		listaClases->Add(objClase);
	}
	objData->Close();
	CerrarConexion();

	return listaClases;
}

List<Clase^>^ ClaseController::ClasesProgramadasxNombreBD(String^ dniProfesorBuscar, String^ nombreAlumno) {
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	PagoController^ objGestorPago = gcnew PagoController();
	List<Clase^>^ listaClases = gcnew List<Clase^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto cp, Personas p where cp.DNIProfesor='" + dniProfesorBuscar + "' and p.Nombre='" + nombreAlumno + "' and cp.DNIAlumno=p.DNI order by FechaClase;";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		Pago^ objPago = objGestorPago->buscarPagoxCodigoBD(CodigoClase);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link, objPago, EstadoLink, EstadoPagoProfesor);
		listaClases->Add(objClase);
	}
	objData->Close();
	CerrarConexion();

	return listaClases;
}











/*Métodos con archivos .txt*/
List<Clase^>^ ClaseController::ClasesProgramadas(String^ dniProfesorBuscar){
	List<Clase^>^ listaClasesProgramadas = gcnew List<Clase^>();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");

	String^ separadores = ";";
	for each (String ^ lineaClase in lineas) {
		array<String^>^ palabras = lineaClase->Split(separadores->ToCharArray());
		String^ dniAlumno= palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ hora = palabras[3];
		String^ fecha = palabras[4];
		Inscripcion^ objInscripcion = buscarInscripcionxHoraxFecha(hora, fecha);
		String^ link = palabras[5];
		String^ codigopago = palabras[6];
		String^ estadoclase = palabras[7];
		Pago^ objPago = buscarPagoxcodigoPago(codigopago);
		String^ estadopagoprofesor = palabras[8];


		if (dniProfesor == dniProfesorBuscar) {
			Clase^ objClaseProgramada = gcnew Clase(objAlumno, objProfesor, objCurso, hora, fecha, link, objPago, estadopagoprofesor);
			listaClasesProgramadas->Add(objClaseProgramada);
		}	
	}

	
	return listaClasesProgramadas;
}

List<Clase^>^ ClaseController::ClasesProgramadasxNombrexDia(String^ dniProfesorBuscar, String^ nombreBuscar, String^ fechaBuscar) {
	List<Clase^>^ listaClasesProgramadasxNombrexDia = gcnew List<Clase^>();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");

	String^ separadores = ";";
	for each (String ^ lineaClase in lineas) {
		array<String^>^ palabras = lineaClase->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ hora = palabras[3];
		String^ fecha = palabras[4];
		Inscripcion^ objInscripcion = buscarInscripcionxHoraxFecha(hora, fecha);
		String^ link = palabras[5];

		if (dniProfesor == dniProfesorBuscar) {
			if((objAlumno->objNombre==nombreBuscar) ||(objAlumno->objApellidoPaterno==nombreBuscar) || (objAlumno->objApellidoMaterno==nombreBuscar) || (fecha == fechaBuscar)) {
				Clase^ objClaseProgramada = gcnew Clase(objAlumno, objProfesor, objCurso, hora, fecha, link);
				listaClasesProgramadasxNombrexDia->Add(objClaseProgramada);
			}
		}
	}
	return listaClasesProgramadasxNombrexDia;
}

Pago^ ClaseController::buscarPagoxcodigoPago(String^ codigopago) {
	Pago^ objPagoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ codigoinscripcion = palabras[0];
		Inscripcion^ objInscripcion = buscarInscripcionxcodigo(codigoinscripcion);
		String^ estadopago = palabras[1];
		String^ horaPago = palabras[2];
		String^ fechaPago = palabras[3];
		String^ codigoPago = palabras[4];
		String^ estadoclase = palabras[5];

		if (codigoinscripcion == codigopago) {
			objPagoEncontrado = gcnew Pago(objInscripcion, estadopago, horaPago, fechaPago, codigoPago, estadoclase);
			
			break;
		}
	}
	return objPagoEncontrado;
}

Inscripcion^ ClaseController::buscarInscripcionxcodigo(String^ codigoinscripcion) {
	Inscripcion^ objInscripEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horaInscripcion = palabras[3];
		String^ fechaInscripcion = palabras[4];
		int tiempoReserva = Convert::ToInt32(palabras[5]);
		String^ horaClase = palabras[6];
		String^ fechaClase = palabras[7];
		int codigo = Convert::ToInt32(palabras[8]);

		if (codigo == Convert::ToInt32(codigoinscripcion)) {
			objInscripEncontrado = gcnew Inscripcion(objAlumno, objCurso, horaInscripcion, fechaInscripcion, tiempoReserva, horaClase, fechaClase, palabras[8]);
			break;
		}
	}
	return objInscripEncontrado;
}

Alumno^ ClaseController::buscarAlumnoxDNI(String^ dniAlumno) {
	Alumno^ objAlumnoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ perfil = palabras[0];
		String^ dniPersona = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (perfil == "A") {
			if (dniPersona == dniAlumno) {
				objAlumnoEncontrado = gcnew Alumno(dniPersona, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
				break;
			}		
		}
	}
	return objAlumnoEncontrado;
}

Profesor^ ClaseController::buscarProfesorxDNI(String^ dniProfesor) {
	Profesor^ objProfesorEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ perfil = palabras[0];
		String^ dniPersona = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (perfil == "P") {
			if (dniPersona == dniProfesor) {
				objProfesorEncontrado = gcnew Profesor(dniPersona, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
				break;
			}
		}
	}
	return objProfesorEncontrado;
}

Curso^ ClaseController::buscarCursoxNombreCurso(String^ cursoBuscar) {
	Curso^ objCursoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ curso = palabras[0];
		String^ tarifa= palabras[1];
		String^ dificultad = palabras[2];
		String^ usuario = palabras[3];

		if (cursoBuscar == curso) {
			objCursoEncontrado = gcnew Curso(curso, tarifa, dificultad, usuario);
			break;
		}
	}
	return objCursoEncontrado;
}

Inscripcion^ ClaseController::buscarInscripcionxHoraxFecha(String^ horaBuscar, String^ fechaBuscar) {
	Inscripcion^ objInscripcionEncontrada;
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horaInscripcion = palabras[3];
		String^ fechaInscripcion = palabras[4];
		int tiempoReserva = Convert::ToInt32(palabras[5]);
		String^ horaClase = palabras[6];
		String^ fechaClase= palabras[7];
		int codigo = Convert::ToInt32(palabras[8]);

		if ((horaClase == horaBuscar)&&(fechaClase == fechaBuscar)) {
			objInscripcionEncontrada = gcnew Inscripcion(objAlumno, objCurso, horaInscripcion, fechaInscripcion, tiempoReserva);
			break;
		}
	}
	return objInscripcionEncontrada;
}

void ClaseController::CargarClaseDesdeArchivo() {
	this->listaClases->Clear();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");

	String^ separadores = ";";
	for each (String ^ lineaClases in lineas) {
		array<String^>^ palabras = lineaClases->Split(separadores->ToCharArray());
		String^ dnialumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dnialumno);
		String^ dniprofesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniprofesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horaclase = palabras[3];
		String^ fecha = palabras[4];
		String^ link = palabras[5];
		String^ codigopago = palabras[6];
		String^ estadoclase = palabras[7];
		Pago^ objPago = buscarPagoxcodigoPago(codigopago);
		String^ estadopagoprofesor = palabras[8];

		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, horaclase, fecha, link, objPago, estadopagoprofesor);
		this->listaClases->Add(objClase);
	}
}


void ClaseController::enviarlink(String^ linkclase, String^ codigoIns) {
	this->listaClases->Clear();
	CargarClaseDesdeArchivo();
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		if ((objClase->objPago->objInscripcion->codigoIns == codigoIns) && (objClase->objLink == "-")) {
			this->listaClases[i]->objLink = linkclase;
			break;
		}
	}

	array<String^>^ lineasArchivoClases = gcnew array<String^>(this->listaClases->Count);
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		lineasArchivoClases[i] = objClase->objAlumno->dni + ";" + objClase->objProfesor->dni + ";" + objClase->objCurso->nombreCurso + ";" + objClase->horaClase + ";" + objClase->fechaClase + ";" + objClase->objLink + ";" + objClase->objPago->objInscripcion->codigoIns + ";" + objClase->objPago->estadoclase + ";" + objClase->estadopagoprofesor;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Clases.txt", lineasArchivoClases);

}

List<Clase^>^ ClaseController::ClasesProgramadasxAlumno(String^ dniAlumnoBuscar) {
	List<Clase^>^ listaClasesProgramadas = gcnew List<Clase^>();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");

	String^ separadores = ";";
	for each (String ^ lineaClase in lineas) {
		array<String^>^ palabras = lineaClase->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ hora = palabras[3];
		String^ fecha = palabras[4];
		Inscripcion^ objInscripcion = buscarInscripcionxHoraxFecha(hora, fecha);
		String^ link = palabras[5];

		if (dniAlumno == dniAlumnoBuscar) {
			Clase^ objClaseProgramada = gcnew Clase(objAlumno, objProfesor, objCurso, hora, fecha, link);
			listaClasesProgramadas->Add(objClaseProgramada);
		}

	}
	return listaClasesProgramadas;
}

List<Clase^>^ ClaseController::ClasesProgramadasxAlumno_BD(String^ dniAlumnoBuscar) {
	List<Clase^>^ listaClases = gcnew List<Clase^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto where DNIAlumno= " + dniAlumnoBuscar + ";";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		AlumnoController^ gestorAlumno = gcnew AlumnoController();
		Alumno^ objAlumno = gestorAlumno->buscaAlumnoxDNI_BD(DNIAlumno);
		ProfesorController^ gestorProfesor = gcnew ProfesorController();
		Profesor^ objProfesor = gestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);//con BD
		CursoController^ gestorCurso = gcnew CursoController();
		Curso^ objCurso = gestorCurso->CursoDisponiblexNombrexProfesor_BD(NombreCurso, objProfesor->objUsuario);
		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link);
		listaClases->Add(objClase);
	}
	objData->Close();
	CerrarConexion();

	return listaClases;
}


void ClaseController::crearclasetxt(String^ codigopago) {
	this->listaClases->Clear();
	CargarClaseDesdeArchivo();

	array<String^>^ lineasArchivoClases = gcnew array<String^>(this->listaClases->Count+1);
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		lineasArchivoClases[i] = objClase->objAlumno->dni + ";" + objClase->objProfesor->dni + ";" + objClase->objCurso->nombreCurso + ";" + objClase->horaClase + 
								";" + objClase->fechaClase + ";" + objClase->objLink + ";" + objClase->objPago->objInscripcion->codigoIns + ";" + objClase->objPago->estadoclase + 
								";" + objClase->estadopagoprofesor;
	}

	PagoController^ objGestorPago = gcnew PagoController();


	Inscripcion^ objInscripcion = objGestorPago->buscarIncscripcionxcodigocompleta(codigopago);
		lineasArchivoClases[this->listaClases->Count] = objInscripcion->objAlumno->dni + ";" + objInscripcion->objCurso->objProfesor->dni + ";" + objInscripcion->objCurso->nombreCurso + 
														";" + objInscripcion->horaInicio + ";" + objInscripcion->fechaClase + ";" + "-" + ";" +objInscripcion->codigoIns +";" + "pendiente" +
														";" + "por pagar";
	
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Clases.txt", lineasArchivoClases);

}


List<Clase^>^ ClaseController::buscarPagosProfesorxEstado(String^ estadoBuscar) {
	
	AlumnoController^ objGestorClase = gcnew AlumnoController();
	ProfesorController^ objGestorProfesor = gcnew ProfesorController();
	CursoController^ objGestorCurso = gcnew CursoController();
	PagoController^ objGestorPago = gcnew PagoController();
	List<Clase^>^ listaClases = gcnew List<Clase^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from ClasesProyecto where EstadoPagoProfesor= '" + estadoBuscar + "' order by FechaClase;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIAlumno = safe_cast<String^>(objData[0]);
		Alumno^ objAlumno = objGestorClase->buscaAlumnoxDNI_BD(DNIAlumno);
		String^ DNIProfesor = safe_cast<String^>(objData[1]);
		Profesor^ objProfesor = objGestorProfesor->buscaProfesorxDNI_BD(DNIProfesor);
		String^ NombreCurso = safe_cast<String^>(objData[2]);
		Curso^ objCurso = objGestorCurso->buscarCursoxNombreCursoBD(NombreCurso);
		String^ HoraClase = Convert::ToString(safe_cast<TimeSpan>(objData[3]));
		DateTime FechaClase = safe_cast<DateTime>(objData[4]);
		String^ fechaInsTR = Convert::ToString(FechaClase.ToShortDateString());
		String^ Link = safe_cast<String^>(objData[5]);
		int CodigoClase = safe_cast<int>(objData[6]);
		Pago^ objPago = objGestorPago->buscarPagoxCodigoBD(CodigoClase);
		String^ EstadoLink = safe_cast<String^>(objData[7]);
		String^ EstadoPagoProfesor = safe_cast<String^>(objData[8]);

		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, HoraClase, fechaInsTR, Link, objPago, EstadoLink, EstadoPagoProfesor);
		listaClases->Add(objClase);
	}
	objData->Close();
	CerrarConexion();

	return listaClases;


	/*List<Clase^>^ listaClasesEncontrados = gcnew List<Clase^>();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");
	String^ separadores = ";";
	for each (String ^ lineaClases in lineas) {
		array<String^>^ palabras = lineaClases->Split(separadores->ToCharArray());
		String^ dnialumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dnialumno);
		String^ dniprofesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniprofesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horaclase = palabras[3];
		String^ fecha = palabras[4];
		String^ link = palabras[5];
		String^ codigopago = palabras[6];
		String^ estadoclase = palabras[7];
		Pago^ objPago = buscarPagoxcodigoPago(codigopago);
		String^ estadopagoprofesor = palabras[8];

		if (estadopagoprofesor->ToUpper() == estadoBuscar->ToUpper()) {
			Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, horaclase, fecha, link, objPago, estadopagoprofesor);
			listaClasesEncontrados->Add(objClase);
		}
	}
	return listaClasesEncontrados;*/
}


void ClaseController::aprobarPago(String^ CodigoInscripcion) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	objQuery->CommandText = "UPDATE ClasesProyecto SET EstadoPagoProfesor = 'cancelado' where CodigoClase= '"+ CodigoInscripcion +"' and EstadoPagoProfesor='por pagar' ;";
	objQuery->ExecuteNonQuery();
	CerrarConexion();




	/*this->listaClases->Clear();
	CargarClaseDesdeArchivo();
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		if ((objClase->objPago->codigoPago == codigopago) && (objClase->estadopagoprofesor == "por pagar")){
			this->listaClases[i]->estadopagoprofesor = "cancelado";
			break;
		}
	}

	array<String^>^ lineasArchivoClases = gcnew array<String^>(this->listaClases->Count);
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		lineasArchivoClases[i] = objClase->objAlumno->dni + ";" + objClase->objProfesor->dni + ";" + objClase->objCurso->nombreCurso + ";" + objClase->objPago->objInscripcion->horaInicio + ";" + objClase->objPago->objInscripcion->fechaClase + ";" + objClase->objLink + ";" + objClase->objPago->objInscripcion->codigoIns + ";" + objClase->objPago->estadoclase + ";" + objClase->estadopagoprofesor;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	//File::WriteAllLines("Clases.txt", lineasArchivoClases);
	//
}

