#include "QuejasController.h"
#include "ProfesorController.h"
#include "AlumnoController.h"


using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

QuejasController::QuejasController() {
	this->listaQuejas = gcnew List<Quejas^>();
	this->objConexion = gcnew SqlConnection();
}
void QuejasController::AbrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();
}
void QuejasController::CerrarConexion() {
	this->objConexion->Close();
}
List<Quejas^>^ QuejasController::obtenerListaQuejas() {
	return this->listaQuejas;
}

void QuejasController::CargarQuejasDesdeArchivo() {
	this->listaQuejas->Clear();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Quejas;";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniagresor = safe_cast<String^>(objData[0]);
		String^ queja = safe_cast<String^>(objData[1]);
		String^ dniagraviado = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
		this->listaQuejas->Add(objQuejas);
	}
	objData->Close();
	CerrarConexion();
	/*array<String^>^ lineas = File::ReadAllLines("Quejas.txt");

	String^ separadores = ";";
	for each (String ^ lineaQuejas in lineas) {
		array<String^>^ palabras = lineaQuejas->Split(separadores->ToCharArray());
		String^ dniagresor = palabras[0];
		String^ queja = palabras[1];
		String^ dniagraviado = palabras[2];
		String^ estado = palabras[3];
		Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
		this->listaQuejas->Add(objQuejas);
	}*/
}

List<Quejas^>^ QuejasController::buscarQuejaAgresor(String^ dniBuscar) {
	List<Quejas^>^ listaQuejasEncontrados = gcnew List<Quejas^>();

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Quejas where DniAgresor= '" + dniBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniagresor = safe_cast<String^>(objData[0]);
		String^ queja = safe_cast<String^>(objData[1]);
		String^ dniagraviado = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
		listaQuejasEncontrados->Add(objQuejas);
	}
	objData->Close();
	CerrarConexion();
	return listaQuejasEncontrados;

	/*array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
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
	return listaQuejasEncontrados;*/
}

List<Quejas^>^ QuejasController::buscarQuejaAgraviado(String^ dniBuscar) {
	List<Quejas^>^ listaQuejasEncontrados = gcnew List<Quejas^>();

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Quejas where DniAgredido= '" + dniBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniagresor = safe_cast<String^>(objData[0]);
		String^ queja = safe_cast<String^>(objData[1]);
		String^ dniagraviado = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
		listaQuejasEncontrados->Add(objQuejas);
	}
	objData->Close();
	CerrarConexion();
	return listaQuejasEncontrados;


	/*array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
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
	return listaQuejasEncontrados;*/
}


void QuejasController::Procede(String^ dniseleccionado) {


	/*this->listaQuejas->Clear();
	CargarQuejasDesdeArchivo();
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		if (objQuejas->DniAgresor == dniseleccionado) {
			this->listaQuejas[i]->Estado = "Bloqueado";
			break;
		}
	}*/
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Update Quejas set Estado='Bloqueado' where DniAgresor='" + dniseleccionado + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

	/*array<String^>^ lineasArchivoQuejas = gcnew array<String^>(this->listaQuejas->Count);
	for (int i = 0; i < this->listaQuejas->Count; i++) {
		Quejas^ objQuejas = this->listaQuejas[i];
		lineasArchivoQuejas[i] = objQuejas->DniAgresor + ";" + objQuejas->Queja + ";" + objQuejas->DniAgreviado + ";" + objQuejas->Estado;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	//File::WriteAllLines("Quejas.txt", lineasArchivoQuejas);

}

void QuejasController::NoProcede(String^ dniseleccionado) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Update Quejas set Estado='No Bloqueado' where DniAgresor='" + dniseleccionado + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

	/*this->listaQuejas->Clear();
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
	//File::WriteAllLines("Quejas.txt", lineasArchivoQuejas);

}

List<Quejas^>^ QuejasController::buscarQuejasxEstado(String^ estadoBuscar) {
	List<Quejas^>^ listaQuejasEncontrados = gcnew List<Quejas^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Quejas where Estado= '" + estadoBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniagresor = safe_cast<String^>(objData[0]);
		String^ queja = safe_cast<String^>(objData[1]);
		String^ dniagraviado = safe_cast<String^>(objData[2]);
		String^ estado = safe_cast<String^>(objData[3]);
		Quejas^ objQuejas = gcnew Quejas(dniagresor, queja, dniagraviado, estado);
		listaQuejasEncontrados->Add(objQuejas);
	}
	objData->Close();
	CerrarConexion();
	return listaQuejasEncontrados;

	/*array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
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
	return listaQuejasEncontrados;*/
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

void QuejasController::generarQuejaxAlumno_BD(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Insert into Quejas values ('" + dniProfesorQueja + "','" + motivo + "','" + dniAlumnoQueja + "','" + "Por Revisar" "');";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

void QuejasController::generarQuejaxProfesor(String^ dniAgresor, String^ dniAgraviado, String^ motivo) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Insert into Quejas values ('" + dniAgresor + "','" + motivo + "','" + dniAgraviado + "','" + "Por Revisar" "');";
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}

int QuejasController::ProfesorBloqueado(String^ dniBuscar) {
	array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
	String^ separadores = ";";
	int bloqueado = 0;
	for each (String ^ lineaQuejas in lineas) {
		array<String^>^ palabras = lineaQuejas->Split(separadores->ToCharArray());
		String^ dniagresor = palabras[0];
		String^ queja = palabras[1];
		String^ dniagraviado = palabras[2];
		String^ estado = palabras[3];
		if (dniagresor == dniBuscar) {
			if (estado == "Bloqueado") {
				bloqueado = 1;
				break;
			}
		}
	}
	return bloqueado;
}
int QuejasController::ProfesorBloqueado_BD(String^ dniBuscar) {
	AbrirConexion();
	int bloqueado = 0;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Quejas where DniAgresor='" + dniBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	while (objData->Read()) {
		String^ Estado = safe_cast<String^>(objData["Estado"]);
		if (Estado == "Bloqueado") {
			bloqueado = 1;
		}
	}
	objData->Close();
	CerrarConexion();
	return bloqueado;
}