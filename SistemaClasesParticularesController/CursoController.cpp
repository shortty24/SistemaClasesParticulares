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
		String^ dificultad = palabras[1];
		String^ usuarioProfesor = palabras[2];
		Curso^ objCurso = gcnew Curso(nombreCurso, dificultad, usuarioProfesor);
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
		String^ dificultad = palabras[1];
		String^ usuarioProfesor = palabras[2];
		Curso^ objCurso = gcnew Curso(nombreCurso, dificultad, usuarioProfesor);
		if (nombreDelCurso == nombreCurso) {
			this->listaCursos->Add(objCurso);
		}
	}
	return this->listaCursos;
}
