#include "ReporteController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

ReporteController::ReporteController(){

	this->CantidadAlumnos = CantidadAlumnos;
	this->CantidadProfesores = CantidadProfesores;
	this->CantidadQuejasResueltas = CantidadQuejasResueltas;
	this->CantidadQuejasNoResueltas = CantidadQuejasNoResueltas;
	//this->ListaAlumnos = gcnew List<Alumno^>();
	//this->ListaProfesores = gcnew List<Profesor^>();
	//this->ListaQuejasResueltas = gcnew List<Quejas^>();
	//this->ListaQuejasNoResueltas = gcnew List<Quejas^>();
	this->objConexion = gcnew SqlConnection();
}
void ReporteController::AbrirConexion() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open();
}
void ReporteController::CerrarConexion() {
	this->objConexion->Close();
}

/*void ReporteController::CargarQuejasDesdeArchivo() {

		array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
		String^ separadores = ";";
		for each (String ^ lineaQueja in lineas) {
			array<String^>^ palabras = lineaQueja->Split(separadores->ToCharArray());
			String^ dniAgresor = palabras[0];
			String^ Queja = palabras[1];
			String^ DniAgreviado = palabras[2];
			String^ EstadoUsuario = palabras[3];

		if (EstadoUsuario == "Bloqueado" | EstadoUsuario == "No Bloqueado") {
			Quejas^ objQuejasResueltas = gcnew Quejas(dniAgresor, Queja, DniAgreviado, EstadoUsuario);
			this->ListaQuejasResueltas->Add(objQuejasResueltas);
			;
		}
		else {
			Quejas^ objQuejasNoResueltas = gcnew Quejas(dniAgresor, Queja, DniAgreviado, EstadoUsuario);
			this->ListaQuejasNoResueltas->Add(objQuejasNoResueltas);

		}
		}
}*/
/*void ReporteController::CargarPersonasDesdeArchivo() {

	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ dni = palabras[1];
		String^ Usuario = palabras[2];
		String^ Contrasenha = palabras[3];
		String^ ApellidoPaterno = palabras[4];
		String^ ApellidoMaterno = palabras[5];
		String^ Nombre = palabras[6];
		String^ Correo = palabras[7];

		if (ID == "A") {
			Alumno^ objAlumno = gcnew Alumno(ID, Usuario, dni, Nombre, ApellidoPaterno, ApellidoMaterno, Correo, Contrasenha);
			this->ListaAlumnos->Add(objAlumno);
			;
		}
		else if (ID == "P") {
			Profesor^ objProfesor = gcnew Profesor(ID, Usuario, dni, Nombre, ApellidoPaterno, ApellidoMaterno, Correo, Contrasenha);
			this->ListaProfesores->Add(objProfesor);
		}
	}
}*/
int ReporteController::ObtenerCantidadProfesores() {
	
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select count(TipoUsuario) from Personas where TipoUsuario='P';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		CantidadProfesores = safe_cast<int>(objData[0]);
	}
	objData->Close();
	CerrarConexion();
	return CantidadProfesores;
}
int ReporteController::ObtenerCantidadAlumnos() {

	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select count(TipoUsuario) from Personas where TipoUsuario='A';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		CantidadAlumnos = safe_cast<int>(objData[0]);
	}
	objData->Close();
	CerrarConexion();
	return CantidadAlumnos;
}
int ReporteController::ObtenerCantidadQuejasResueltas(){
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select count(Estado) from Quejas where Estado='No Bloqueado' or Estado='Bloqueado';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		CantidadQuejasResueltas = safe_cast<int>(objData[0]);
	}
	objData->Close();
	CerrarConexion();
	return CantidadQuejasResueltas;
}
int ReporteController::ObtenerCantidadQuejasNoResueltas() {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select count(Estado) from Quejas where Estado='Por revisar';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		CantidadQuejasNoResueltas = safe_cast<int>(objData[0]);
	}
	objData->Close();
	CerrarConexion();
	return CantidadQuejasNoResueltas;
}