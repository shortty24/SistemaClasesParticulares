#include "QuejasController.h"
#include "ProfesorController.h"
#include "AlumnoController.h"


using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

QuejasController::QuejasController() {
	this->listaQuejas = gcnew List<Quejas^>();
}

List<Quejas^>^ QuejasController::obtenerListaQuejas() {
	return this->listaQuejas;
}

void QuejasController::CargarQuejasDesdeArchivo() {
	this->listaQuejas->Clear();
	array<String^>^ lineas = File::ReadAllLines("Quejas.txt");

	String^ separadores = ";";
	for each (String ^ lineaQuejas in lineas) {
		array<String^>^ palabras = lineaQuejas->Split(separadores->ToCharArray());
		String^ dniagresor = palabras[0];
		String^ queja = palabras[1];
		String^ dniagraviado = palabras[2];
		String^ estado = palabras[3];
		Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
		this->listaQuejas->Add(objQuejas);
	}
}

List<Quejas^>^ QuejasController::buscarQuejaAgresor(String^ dniBuscar) {
	List<Quejas^>^ listaQuejasEncontrados = gcnew List<Quejas^>();
	array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
	String^ separadores = ";";
	for each (String ^ lineaQuejas in lineas) {
		array<String^>^ palabras = lineaQuejas->Split(separadores->ToCharArray());
		String^ dniagresor = palabras[0];
		String^ queja = palabras[1];
		String^ dniagraviado = palabras[2];
		String^ estado = palabras[3];
		if (dniagresor->ToUpper() == dniBuscar->ToUpper()) {
			Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
			listaQuejasEncontrados->Add(objQuejas);
		}
	}
	return listaQuejasEncontrados;
}

List<Quejas^>^ QuejasController::buscarQuejaAgraviado(String^ dniBuscar) {
	List<Quejas^>^ listaQuejasEncontrados = gcnew List<Quejas^>();
	array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
	String^ separadores = ";";
	for each (String ^ lineaQuejas in lineas) {
		array<String^>^ palabras = lineaQuejas->Split(separadores->ToCharArray());
		String^ dniagresor = palabras[0];
		String^ queja = palabras[1];
		String^ dniagraviado = palabras[2];
		String^ estado = palabras[3];
		if (dniagraviado->ToUpper() == dniBuscar->ToUpper()) {
			Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
			listaQuejasEncontrados->Add(objQuejas);
		}
	}
	return listaQuejasEncontrados;
}


void QuejasController::Procede(String^ dniseleccionado) {
	this->listaQuejas->Clear();
	CargarQuejasDesdeArchivo();
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		if (objQuejas->DniAgresor == dniseleccionado) {
			this->listaQuejas[i]->Estado = "Bloqueado";
			break;
		}
	}

	array<String^>^ lineasArchivoQuejas = gcnew array<String^>(this->listaQuejas->Count);
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		lineasArchivoQuejas[i] = objQuejas->DniAgresor + ";" + objQuejas->Queja + ";" + objQuejas->DniAgreviado + ";" + objQuejas->Estado;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Quejas.txt", lineasArchivoQuejas);

}

void QuejasController::NoProcede(String^ dniseleccionado) {
	this->listaQuejas->Clear();
	CargarQuejasDesdeArchivo();
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		if (objQuejas->DniAgresor == dniseleccionado) {
			this->listaQuejas[i]->Estado = "No Bloqueado";
			break;
		}
	}

	array<String^>^ lineasArchivoQuejas = gcnew array<String^>(this->listaQuejas->Count);
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		lineasArchivoQuejas[i] = objQuejas->DniAgresor + ";" + objQuejas->Queja + ";" + objQuejas->DniAgreviado + ";" + objQuejas->Estado;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Quejas.txt", lineasArchivoQuejas);

}

List<Quejas^>^ QuejasController::buscarQuejasxEstado(String^ estadoBuscar) {
	List<Quejas^>^ listaQuejasEncontrados = gcnew List<Quejas^>();
	array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
	String^ separadores = ";";
	for each (String ^ lineaQuejas in lineas) {
		array<String^>^ palabras = lineaQuejas->Split(separadores->ToCharArray());
		String^ dniagresor = palabras[0];
		String^ queja = palabras[1];
		String^ dniagraviado = palabras[2];
		String^ estado = palabras[3];
		if (estado->ToUpper() == estadoBuscar->ToUpper()) {
			Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
			listaQuejasEncontrados->Add(objQuejas);
		}
	}
	return listaQuejasEncontrados;
}

void QuejasController::generarQuejaxAlumno(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo) {
	CargarQuejasDesdeArchivo();
	array<String^>^ lineasArchivoQuejas = gcnew array<String^>(this->listaQuejas->Count + 1);
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		lineasArchivoQuejas[i] = objQuejas->DniAgresor + ";" + objQuejas->Queja + ";" + objQuejas->DniAgreviado + ";" + objQuejas->Estado;
	}
	lineasArchivoQuejas[this->listaQuejas->Count] = dniAlumnoQueja + ";" + motivo + ";" + dniProfesorQueja + ";" + "Por Revisar";
	File::WriteAllLines("Quejas.txt", lineasArchivoQuejas);
}


void QuejasController::generarQuejaxProfesor(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo) {
	CargarQuejasDesdeArchivo();
	array<String^>^ lineasArchivoQuejas = gcnew array<String^>(this->listaQuejas->Count + 1);
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		lineasArchivoQuejas[i] = objQuejas->DniAgresor + ";" + objQuejas->Queja + ";" + objQuejas->DniAgreviado + ";" + objQuejas->Estado;
	}
	lineasArchivoQuejas[this->listaQuejas->Count] = dniProfesorQueja + ";" + motivo + ";" + dniAlumnoQueja + ";" + "Por Revisar";
	File::WriteAllLines("Quejas.txt", lineasArchivoQuejas);
}