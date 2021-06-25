#include "CursoController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

CursoController::CursoController() {
	this->listaCursos = gcnew List<Curso^>();
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