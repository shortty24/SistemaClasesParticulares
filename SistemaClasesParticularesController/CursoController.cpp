#include "CursoController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

CursoController::CursoController() {
	this->listaCursos = gcnew List<Curso^>();
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