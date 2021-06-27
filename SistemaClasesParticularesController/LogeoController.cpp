#include "LogeoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

LogeoController::LogeoController() {

	//this->listaPersonas = gcnew List<Persona^>();
	this->Existe = Existe;
	this->Estado = Estado;
	this->EstadoCV = EstadoCV;
	this->EstadoUsuario = EstadoUsuario;
	this->objConexion = gcnew SqlConnection();
}
void LogeoController::AbrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); 
}
void LogeoController::CerrarConexion() {
	this->objConexion->Close();
}
int LogeoController::VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where Usuario='" + textBox1 + "' and Contrasenha='" + textBox2 + "';";
	SqlDataReader^ objData= objQuery->ExecuteReader();
	//String^ DNI = safe_cast<String^>(objData["DNI"]);
	if (objData->Read()) {
		String^ TipoUser = safe_cast<String^>(objData["TipoUsuario"]);
		String^ Dni = safe_cast<String^>(objData["DNI"]);
		objData->Close();
		EstadoUsuario = VerificarEstadoUsuario(Dni);
		if (TipoUser == "A") {
			if (EstadoUsuario == "No Bloqueado") {
				Existe = 1; // Alumno sí está en base de datos y no está bloqueado
			}
			else {
				Existe = 6; // Alumno sí está en base de datos, pero está bloqueado
			}
		}
		else if (TipoUser == "P") {
			String^ EstadoCV = VerificarValidacionCV(Dni);
			if (EstadoCV == "PorVerificar") {
				Existe = 4;
			}
			else if (EstadoCV == "Desaprobado") {
				Existe = 5;
			}
			else if (EstadoCV == "Bloqueado") {
				Existe = 6;
			}
			else if (EstadoCV == "Aprobado" && EstadoUsuario == "No Bloqueado") {
				Existe = 2;
			}
		}
		else if (TipoUser == "M") {
			Existe = 3;
		}
		else {
			Existe = 0;
		}
	}
	//objData->Close();
	CerrarConexion();
	return Existe;
}
String^ LogeoController::VerificarValidacionCV(String^ DNI) {

	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from CVs where DNI='" + DNI + "';";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	if (objData1->Read()) {
			EstadoCV = safe_cast<String^>(objData1["EstadoCV"]);
	}
	else {
		EstadoCV = "";
	}
	objData1->Close();
	return EstadoCV;
}
String^ LogeoController::VerificarEstadoUsuario(String^ DNI) {

	SqlCommand^ objQuery2 = gcnew SqlCommand();
	objQuery2->Connection = this->objConexion;
	objQuery2->CommandText = "select * from Quejas where DniAgresor='" + DNI + "';";
	SqlDataReader^ objData2 = objQuery2->ExecuteReader();
	if (objData2->Read()) {
		Estado = safe_cast<String^>(objData2["Estado"]);
	}
	else {
		Estado = "No Bloqueado";
	}
	objData2->Close();
	return Estado;
}