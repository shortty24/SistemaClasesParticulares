#include "CVController.h"
#include "ProfesorController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

CVController::CVController() {
	this->listaCV = gcnew List<CV^>();
}

void CVController::CargarCVDesdeArchivo() {
	this->listaCV->Clear();
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");

	String^ separadores = ";";
	for each (String ^ lineaCVs in lineas) {
		array<String^>^ palabras = lineaCVs->Split(separadores->ToCharArray());
		String^ dniprofesor = palabras[0];
		String^ codigoMinedu = palabras[1];
		String^ empresa = palabras[2];
		String^ celuempresa = palabras[3];
		String^ verficacion = palabras[4];
		CV^ objCV = gcnew CV(dniprofesor, codigoMinedu, empresa, celuempresa, verficacion);
		this->listaCV->Add(objCV);
	}
}

List<CV^>^ CVController::obtenerListaCVs() {
	return this->listaCV;
}

List<CV^>^ CVController::buscarCV(String^ dniBuscar) {
	List<CV^>^ listaCVsEncontrados = gcnew List<CV^>();
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");
	String^ separadores = ";";
	for each (String ^ lineaCVs in lineas) {
		array<String^>^ palabras = lineaCVs->Split(separadores->ToCharArray());
		String^ dniprofesor = palabras[0];
		String^ codigoMinedu = palabras[1];
		String^ empresa = palabras[2];
		String^ celuempresa = palabras[3];
		String^ verficacion = palabras[4];
		if (dniprofesor->ToUpper() == dniBuscar->ToUpper()) {
			CV^ objCV = gcnew CV(dniprofesor, codigoMinedu, empresa, celuempresa, verficacion);
			listaCVsEncontrados->Add(objCV);
		}
	}
	return listaCVsEncontrados;
}

List<CV^>^ CVController::buscarCVxEstado(String^ estadoBuscar) {
	List<CV^>^ listaCVsEncontrados = gcnew List<CV^>();
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");
	String^ separadores = ";";
	for each (String ^ lineaCVs in lineas) {
		array<String^>^ palabras = lineaCVs->Split(separadores->ToCharArray());
		String^ dniprofesor = palabras[0];
		String^ codigoMinedu = palabras[1];
		String^ empresa = palabras[2];
		String^ celuempresa = palabras[3];
		String^ verficacion = palabras[4];
		if (verficacion->ToUpper() == estadoBuscar->ToUpper()) {
			CV^ objCV = gcnew CV(dniprofesor, codigoMinedu, empresa, celuempresa, verficacion);
			listaCVsEncontrados->Add(objCV);
		}
	}
	return listaCVsEncontrados;
}

void CVController::aprobarCV(String^ dniseleccionado) {
	this->listaCV->Clear();
	CargarCVDesdeArchivo();
	for (int i = 0; i < this->listaCV->Count; i++) {
		CV^ objCV = this->listaCV[i];
		if (objCV->DniProfesor == dniseleccionado) {
			this->listaCV[i]->Validación = "Aprobado";
			break;
		}
	}

	array<String^>^ lineasArchivoCV = gcnew array<String^>(this->listaCV->Count);
	for (int i = 0; i < this->listaCV->Count; i++) {
		CV^ objCV = this->listaCV[i];
		lineasArchivoCV[i] = objCV->DniProfesor + ";" + objCV->objCodigoMinedu + ";" + objCV->objEmpresa + ";" + objCV->telefonoEmpresa + ";" + objCV->Validación;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("CVs.txt", lineasArchivoCV);

}

void CVController::desaprobarCV(String^ dniseleccionado) {
	this->listaCV->Clear();
	CargarCVDesdeArchivo();
	for (int i = 0; i < this->listaCV->Count; i++) {
		CV^ objCV = this->listaCV[i];
		if (objCV->DniProfesor == dniseleccionado) {
			this->listaCV[i]->Validación = "Desaprobado";
			break;
		}
	}

	array<String^>^ lineasArchivoCV = gcnew array<String^>(this->listaCV->Count);
	for (int i = 0; i < this->listaCV->Count; i++) {
		CV^ objCV = this->listaCV[i];
		lineasArchivoCV[i] = objCV->DniProfesor + ";" + objCV->objCodigoMinedu + ";" + objCV->objEmpresa + ";" + objCV->telefonoEmpresa + ";" + objCV->Validación;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("CVs.txt", lineasArchivoCV);

}

String^ CVController::obtenerEmpresaRef(String^ dniProfesor) {
	String^ nombreEmpresa;
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dniProfesorEnc = palabras[0];
		String^ empresa = palabras[2];
		//ProfesorController^ gestorProfesor = gcnew ProfesorController();
		//Profesor^ profesorEncontrado = gestorProfesor -> buscaProfesorxdni (dniProfesorEnc);
		if (dniProfesorEnc == dniProfesor) {
			nombreEmpresa=empresa;
			break;
		}
	}
	return nombreEmpresa;
}