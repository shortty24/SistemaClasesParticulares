#include "RegistroController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;


RegistroController::RegistroController() {

	this->Repite = Repite;
	this->listaPersonas = gcnew List<Persona^>();
	this->listaCV = gcnew List<CV^>();
	this->listaBonus = gcnew List<BonusAlumno^>();
	this->objConexion = gcnew SqlConnection();
}
void RegistroController::AbrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();
}
void RegistroController::CerrarConexion() {
	this->objConexion->Close();
}
void RegistroController::GuardarNuevoUsuarioEnArchivo(Persona^ objPersona) {
		AbrirConexion();
		SqlCommand^ objQuery = gcnew SqlCommand();
		objQuery->Connection = this->objConexion;
		objQuery->CommandText = "Insert into Personas values ('" + objPersona->CodigoUsuario + "','" + objPersona->dni + "','" + objPersona->objUsuario + "','" + objPersona->objContrasenha + "','" + objPersona->objApellidoPaterno + "','" + objPersona->objApellidoMaterno + "','" + objPersona->objNombre + "','" + objPersona->objCorreo + "');";
		objQuery->ExecuteNonQuery();
		CerrarConexion();
}

void RegistroController::GuardarNuevoBonusAlumnoEnArchivo(BonusAlumno^ objBonus) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Insert into Bonus values ('" + objBonus->DniAlumno + "','" + objBonus->Estado + "');";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

}

void RegistroController::GuardarNuevoCV(CV^ objCV) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Insert into CVs values ('" + objCV->DniProfesor + "','" + objCV->objCodigoMinedu + "','" + objCV->objEmpresa + "','" + objCV->telefonoEmpresa + "','" + objCV->Validación + "');";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}
int RegistroController::VerificarSiUsuarioRepite(String^ textBox1) {
	
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where Usuario='" + textBox1 + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		Repite = 1; // Si
	}
	else {
		Repite = 0; // No
	}
	CerrarConexion();
	return Repite;
}

int RegistroController::VerificarSiDniRepite(String^ textBox2) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where DNI='" + textBox2 + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		Repite = 1; // Si
	}
	else {
		Repite = 0; // No
	}
	CerrarConexion();
	return Repite;
}