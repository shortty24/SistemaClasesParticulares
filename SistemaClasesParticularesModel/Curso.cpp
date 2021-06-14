#include "Curso.h"

using namespace SistemaClasesParticularesModel;

Curso::Curso(String^ nombreCurso, String^ dificultad, String^ usuarioProfesor) {
	this->nombreCurso = nombreCurso;
	this->dificultad = dificultad;
	this->usuarioProfesor = usuarioProfesor;
}