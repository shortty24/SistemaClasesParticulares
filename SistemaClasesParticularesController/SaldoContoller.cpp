#include "SaldoController.h"
#include "ProfesorController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

SaldoController::SaldoController() {
	this->listaSaldo = gcnew List<Saldo^>();
	this->objConexion = gcnew SqlConnection();

}
void SaldoController::AbrirConexion() {
	/*La cadena conexion está compuesto de: Servidor BD, nombre de BD, usuario de BD y contraseña de BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); /*Ya establecí la conexión con la BD*/
}

void SaldoController::CerrarConexion() {
	this->objConexion->Close();
}

String^ SaldoController::obtenerSaldoBD(String^ DNIProfesor) {
	String^ SaldoProfesor;
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from SaldosProyecto where DNIProfesor='"+DNIProfesor+"';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		SaldoProfesor = safe_cast<String^>(objData[1]);
	}
	objData->Close();
	CerrarConexion();

	return SaldoProfesor;
}

void SaldoController::CargarSaldoDesdeArchivo() {
	this->listaSaldo->Clear();
	array<String^>^ lineas = File::ReadAllLines("Saldos.txt");

	String^ separadores = ";";
	for each (String ^ lineaSaldos in lineas) {
		array<String^>^ palabras = lineaSaldos->Split(separadores->ToCharArray());
		String^ dniprofesor = palabras[0];
		String^ saldo = palabras[1];
		Saldo^ objSaldo = gcnew Saldo(dniprofesor, saldo);
		this->listaSaldo->Add(objSaldo);
	}
}

List<Saldo^>^ SaldoController::obtenerListaSaldos() {
	return this->listaSaldo;
}

void SaldoController::pagarprofesor(int saldoaumentado, String^ dniprofesor) {
	this->listaSaldo->Clear();
	CargarSaldoDesdeArchivo();
	for (int i = 0; i < this->listaSaldo->Count; i++) {
		Saldo^ objSaldo = this->listaSaldo[i];
		if (objSaldo->DniProfesor == dniprofesor) {
			int saldoactual = Convert::ToInt32(objSaldo->saldo);
			int saldoactualizado = saldoactual + saldoaumentado;

			this->listaSaldo[i]->saldo = Convert::ToString(saldoactualizado);
			break;
		}
	}

	array<String^>^ lineasArchivoClases = gcnew array<String^>(this->listaSaldo->Count);
	for (int i = 0; i < this->listaSaldo->Count; i++) {
		Saldo^ objSaldo = this->listaSaldo[i];
		lineasArchivoClases[i] = objSaldo->DniProfesor + ";" + objSaldo->saldo;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Saldos.txt", lineasArchivoClases);
}


void SaldoController::crearsaldo(String^ dniseleccionado) {
	this->listaSaldo->Clear();
	CargarSaldoDesdeArchivo();
	

	array<String^>^ lineasArchivoClases = gcnew array<String^>(this->listaSaldo->Count+1);
	for (int i = 0; i < this->listaSaldo->Count; i++) {
		Saldo^ objSaldo = this->listaSaldo[i];
		lineasArchivoClases[i] = objSaldo->DniProfesor + ";" + objSaldo->saldo;
	}

	lineasArchivoClases[this->listaSaldo->Count] = dniseleccionado + ";" + "0";
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Saldos.txt", lineasArchivoClases);
}