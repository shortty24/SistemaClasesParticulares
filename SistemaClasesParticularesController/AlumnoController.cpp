#include "AlumnoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

AlumnoController::AlumnoController(){
	this->listaAlumnos = gcnew List<Alumno^>();
	this->objConexion = gcnew SqlConnection();
}
void AlumnoController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre de BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();/*Ya establecí conexión con la BD*/
}
void AlumnoController::CerrarConexion() {
	this->objConexion->Close();
}
Alumno^ AlumnoController::buscaAlumno(String^usuarioAlumno) {
	Alumno^ objAlumnoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];
		
		if (usuario == usuarioAlumno) {
			objAlumnoEncontrado = gcnew Alumno(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
			break;
		}
	}
	return objAlumnoEncontrado;
}
Alumno^ AlumnoController::buscaAlumnoxDNI(String^ dniAlumno) {
	Alumno^ objAlumnoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (dni == dniAlumno) {
			objAlumnoEncontrado = gcnew Alumno(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
			break;
		}
	}
	return objAlumnoEncontrado;
}
Alumno^ AlumnoController::buscaAlumnoBD(String^ usuarioAlumno) {
	AbrirConexion();
	Alumno^ objAlumnoEncontrado;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where Usuario='" + usuarioAlumno + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ dni = safe_cast<String^>(objData["DNI"]);
		String^ usuario = safe_cast<String^>(objData["Usuario"]);
		String^ contrasenha = safe_cast<String^>(objData["Contrasenha"]);
		String^ apellidoPaterno = safe_cast<String^>(objData["ApellidoPaterno"]);
		String^ apellidoMaterno = safe_cast<String^>(objData["ApellidoMaterno"]);
		String^ nombre = safe_cast<String^>(objData["Nombre"]);
		objData->Close();
		objAlumnoEncontrado = gcnew Alumno(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
	}
	CerrarConexion();
	return objAlumnoEncontrado;
}
Alumno^ AlumnoController::buscaAlumnoxDNI_BD(String^ dniAlumno) {
	AbrirConexion();
	Alumno^ objAlumnoEncontrado;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where DNI='" + dniAlumno + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ dni = safe_cast<String^>(objData["DNI"]);
		String^ usuario = safe_cast<String^>(objData["Usuario"]);
		String^ contrasenha = safe_cast<String^>(objData["Contrasenha"]);
		String^ apellidoPaterno = safe_cast<String^>(objData["ApellidoPaterno"]);
		String^ apellidoMaterno = safe_cast<String^>(objData["ApellidoMaterno"]);
		String^ nombre = safe_cast<String^>(objData["Nombre"]);
		objData->Close();
		objAlumnoEncontrado = gcnew Alumno(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
	}
	CerrarConexion();
	return objAlumnoEncontrado;
}