#include "SaldoController.h"
#include "ProfesorController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

SaldoController::SaldoController() {
	this->listaSaldo = gcnew List<Saldo^>();
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