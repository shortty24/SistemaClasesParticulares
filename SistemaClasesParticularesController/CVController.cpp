#include "CVController.h"
#include "ProfesorController.h"
#include "SaldoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

CVController::CVController() {
	this->listaCV = gcnew List<CV^>();
	this->objConexion = gcnew SqlConnection();
}

void CVController::AbrirConexion() {
	/*La cadena de conexión está compuesto de: Servidor de BD, nombre de BD, usuario BD, password BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();/*Ya establecí conexión con la BD*/
}
void CVController::CerrarConexion() {
	this->objConexion->Close();
}

void CVController::CargarCVDesdeArchivo() {
	this->listaCV->Clear();

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from CVs;";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniprofesor = safe_cast<String^>(objData[0]);
		String^ codigoMinedu = safe_cast<String^>(objData[1]);
		String^ empresa = safe_cast<String^>(objData[2]);
		String^ celuempresa = safe_cast<String^>(objData[3]);
		String^ verficacion = safe_cast<String^>(objData[4]);
		CV^ objCV = gcnew CV(dniprofesor, codigoMinedu, empresa, celuempresa, verficacion);
		this->listaCV->Add(objCV);
	}
	objData->Close();
	CerrarConexion();

	/*array<String^>^ lineas = File::ReadAllLines("CVs.txt");

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
	}*/
}

List<CV^>^ CVController::obtenerListaCVs() {
	return this->listaCV;
}

List<CV^>^ CVController::buscarCV(String^ dniBuscar) {
	List<CV^>^ listaCVsEncontrados = gcnew List<CV^>();

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from CVs where DNI= '" + dniBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniprofesor = safe_cast<String^>(objData[0]);
		String^ codigoMinedu = safe_cast<String^>(objData[1]);
		String^ empresa = safe_cast<String^>(objData[2]);
		String^ celuempresa = safe_cast<String^>(objData[3]);
		String^ verficacion = safe_cast<String^>(objData[4]);
		CV^ objCV = gcnew CV(dniprofesor, codigoMinedu, empresa, celuempresa, verficacion);
		listaCVsEncontrados->Add(objCV);
	}
	objData->Close();
	CerrarConexion();
	return listaCVsEncontrados;

	/*array<String^>^ lineas = File::ReadAllLines("CVs.txt");
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
	return listaCVsEncontrados;*/
}

List<CV^>^ CVController::buscarCVxEstado(String^ estadoBuscar) {
	List<CV^>^ listaCVsEncontrados = gcnew List<CV^>();

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from CVs where EstadoCV= '" + estadoBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();

	while (objData->Read()) {
		String^ dniprofesor = safe_cast<String^>(objData[0]);
		String^ codigoMinedu = safe_cast<String^>(objData[1]);
		String^ empresa = safe_cast<String^>(objData[2]);
		String^ celuempresa = safe_cast<String^>(objData[3]);
		String^ verficacion = safe_cast<String^>(objData[4]);
		CV^ objCV = gcnew CV(dniprofesor, codigoMinedu, empresa, celuempresa, verficacion);
		listaCVsEncontrados->Add(objCV);
	}
	objData->Close();
	CerrarConexion();
	return listaCVsEncontrados;
	/*array<String^>^ lineas = File::ReadAllLines("CVs.txt");
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
	return listaCVsEncontrados;*/
}

void CVController::aprobarCV(String^ dniseleccionado) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Update CVs set EstadoCV='Aprobado' where DNI='" + dniseleccionado + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

	/*this->listaCV->Clear();
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
	//File::WriteAllLines("CVs.txt", lineasArchivoCV);

}

void CVController::desaprobarCV(String^ dniseleccionado) {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "Update CVs set EstadoCV='Desaprobado' where DNI='" + dniseleccionado + "';";
	objQuery->ExecuteNonQuery();
	CerrarConexion();

	/*this->listaCV->Clear();
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
	//File::WriteAllLines("CVs.txt", lineasArchivoCV);

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

String^ CVController::obtenerEmpresaRef_BD(String^ dniProfesor) {
	AbrirConexion();
	String^ nombreEmpresa;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from CVs where DNI='" + dniProfesor + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ Empresa = safe_cast<String^>(objData["Empresa"]);
		nombreEmpresa = Empresa;
	}
	objData->Close();
	CerrarConexion();
	return nombreEmpresa;
}

int CVController::EstadoCV(String^ dniProfe) {
	List<CV^>^ listaCVsEncontrados = gcnew List<CV^>();
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");
	String^ separadores = ";";
	int aprobado = 0;
	for each (String ^ lineaCVs in lineas) {
		array<String^>^ palabras = lineaCVs->Split(separadores->ToCharArray());
		String^ dniprofesor = palabras[0];
		String^ codigoMinedu = palabras[1];
		String^ empresa = palabras[2];
		String^ celuempresa = palabras[3];
		String^ verificacion = palabras[4];
		if (dniprofesor == dniProfe) {
			if (verificacion == "Aprobado") {
				aprobado = 1;
			}
			break;
		}
	}
	return aprobado;
}

int CVController::EstadoCV_BD(String^ dniProfe) {
	AbrirConexion();
	int aprobado = 0;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from CVs where DNI='" + dniProfe + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ EstadoCV = safe_cast<String^>(objData["EstadoCV"]);
		if (EstadoCV == "Aprobado") {
			aprobado = 1;
		}
	}
	objData->Close();
	CerrarConexion();
	return aprobado;
}