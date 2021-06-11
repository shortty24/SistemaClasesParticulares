#include "Curso.h"

using namespace SistemaClasesParticularesModel;

Curso::Curso(String^ nombreCurso, String^ dificultad, String^ dniProfesor) {
	this->nombreCurso = nombreCurso;
	this->dificultad = dificultad;
	this->dniProfesor = dniProfesor;
}