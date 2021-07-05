#include "ProfesorController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

ProfesorController::ProfesorController() {
	this->listaProfesores = gcnew List<Profesor^>();
	this->objConexion = gcnew SqlConnection();
}
void ProfesorController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre de BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();/*Ya establecí conexión con la BD*/
}
void ProfesorController::CerrarConexion() {
	this->objConexion->Close();
}
Profesor^ ProfesorController::buscaProfesor(String^ usuarioProfesor) {
	AbrirConexion();
	Profesor^ objProfesorEncontrado;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where Usuario='" + usuarioProfesor + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ dni = safe_cast<String^>(objData["DNI"]);
		String^ usuario = safe_cast<String^>(objData["Usuario"]);
		String^ contrasenha = safe_cast<String^>(objData["Contrasenha"]);
		String^ apellidoPaterno = safe_cast<String^>(objData["ApellidoPaterno"]);
		String^ apellidoMaterno = safe_cast<String^>(objData["ApellidoMaterno"]);
		String^ nombre = safe_cast<String^>(objData["Nombre"]);
		objData->Close();
		objProfesorEncontrado = gcnew Profesor(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
	}
	CerrarConexion();
	return objProfesorEncontrado;
}

Profesor^ ProfesorController::buscaProfesorxDNI_BD(String^ dniProfesor) {
	AbrirConexion();
	Profesor^ objProfesorEncontrado;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where DNI='" + dniProfesor + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ dni = safe_cast<String^>(objData["DNI"]);
		String^ usuario = safe_cast<String^>(objData["Usuario"]);
		String^ contrasenha = safe_cast<String^>(objData["Contrasenha"]);
		String^ apellidoPaterno = safe_cast<String^>(objData["ApellidoPaterno"]);
		String^ apellidoMaterno = safe_cast<String^>(objData["ApellidoMaterno"]);
		String^ nombre = safe_cast<String^>(objData["Nombre"]);
		objData->Close();
		objProfesorEncontrado = gcnew Profesor(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
	}
	CerrarConexion();
	return objProfesorEncontrado;
}

String^ ProfesorController::obtenerUsuarioxNombreCompleto(String^ nombreCompleto) {
	String^ usuarioEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];
		String^ nombreProfesor = nombre + " " + apellidoPaterno + " " + apellidoMaterno;
		if (nombreProfesor == nombreCompleto) {
			usuarioEncontrado = usuario;
			break;
		}
	}
	return usuarioEncontrado;
}
String^ ProfesorController::obtenerdnixNombreCompleto(String^ nombreCompleto) {
	String^ dniEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];
		String^ nombreProfesor = nombre + " " + apellidoPaterno + " " + apellidoMaterno;
		if (nombreProfesor == nombreCompleto) {
			dniEncontrado = dni;
			break;
		}
	}
	return dniEncontrado;
}

Profesor^ ProfesorController::buscaProfesorxDNI(String^ dniProfe) {
	Profesor^ objProfesorEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (dni == dniProfe) {
			objProfesorEncontrado = gcnew Profesor(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
			break;
		}
	}
	return objProfesorEncontrado;
}



