#include "CursoController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

CursoController::CursoController() {
	this->listaCursos = gcnew List<Curso^>();
	this->objConexion = gcnew SqlConnection();
}

void CursoController::AbrirConexion() {
	/*La cadena conexion está compuesto de: Servidor BD, nombre de BD, usuario de BD y contraseña de BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); /*Ya establecí la conexión con la BD*/
}

void CursoController::CerrarConexion() {
	this->objConexion->Close();
}


void CursoController::CargarCursosDesdeArchivo() {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		this->listaCursos->Add(objCurso);
	}
}

List<Curso^>^ CursoController::CursosDisponibles() {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		this->listaCursos->Add(objCurso);
	}
	return this->listaCursos;
}
List<Curso^>^ CursoController::CursosDisponiblesxNombre(String^ nombreDelCurso) {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso,precio, dificultad, usuarioProfesor);
		if (nombreDelCurso == nombreCurso) {
			this->listaCursos->Add(objCurso);
		}
	}
	return this->listaCursos;
}
Curso^ CursoController::CursoDisponiblexNombrexProfesor(String^ nombreDelCurso, String^ usuarioProfe) {
	Curso^ cursoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		if (nombreDelCurso == nombreCurso && usuarioProfesor == usuarioProfe) {
			cursoEncontrado=objCurso;
			break;
		}
	}
	return cursoEncontrado;
}

Curso^ CursoController::CursoDisponiblexNombrexProfesor_BD(String^ nombreDelCurso, String^ usuarioProfe) {
	Curso^ cursoEncontrado;
	AbrirConexion();
	Inscripcion^ objetoEncontrado;
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from CursosDisponiblesProyecto where NombreCurso='" + nombreDelCurso + "'and UsuarioProfesor='"+ usuarioProfe + "';";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	if (objData1->Read()) {
		String^ nombreCurso = safe_cast<String^>(objData1["NombreCurso"]);
		String^ precio = safe_cast<String^>(objData1["PrecioCurso"]);
		String^ dificultad = safe_cast<String^>(objData1["Dificultad"]);
		String^ usuarioProfesor = safe_cast<String^>(objData1["UsuarioProfesor"]);
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		cursoEncontrado = objCurso;
	}
	objData1->Close();
	CerrarConexion();
	return cursoEncontrado;
}

List<Curso^>^ CursoController::CursosxUsusarioProfesor(String^ usuarioProfesorBuscar) {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		if (usuarioProfesor == usuarioProfesorBuscar) {
			this->listaCursos->Add(objCurso);
		}
	}
	return this->listaCursos;
}

void CursoController::AñadirCurso(Curso^ objCurso) {
	this->listaCursos->Clear();
	CargarCursosDesdeArchivo();
	this->listaCursos->Add(objCurso);
	/*Primero vamos a guardar la información de los miembros de los partidos en sus respectivos archivos*/
	/*1ro. Voy a contar cuantos miembros en total entre todos los partidos*/
	array<String^>^ lineasArchivoCurso = gcnew array<String^>(this->listaCursos->Count);
	for (int i = 0; i < this->listaCursos->Count; i++) {
		Curso^ objCurso = this->listaCursos[i];
		//Profesor^ objProfesor = this->listaProfesores[n];
		lineasArchivoCurso[i] = objCurso->nombreCurso + ";" + objCurso->precioCurso + ";" + objCurso->dificultad+ ";" + objCurso->usuarioProfesor;
	}
	/*Aquí ya mi array de lineasArchivoCV esta OK, con la información a grabar*/
	File::WriteAllLines("CursosDisponibles.txt", lineasArchivoCurso);
}