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