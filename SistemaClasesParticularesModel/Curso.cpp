#include "Curso.h"

using namespace SistemaClasesParticularesModel;

Curso::Curso(String^ nombreCurso, String^ precioCurso, String^ dificultad, String^ usuarioProfesor) {
	this->nombreCurso = nombreCurso;
	this->precioCurso = precioCurso;
	this->dificultad = dificultad;
	this->usuarioProfesor = usuarioProfesor;
}

Curso::Curso(String^ nombreCurso, String^ dificultad, Profesor^ objProfesor) {
	this->nombreCurso = nombreCurso;
	this->dificultad = dificultad;
	this->objProfesor = objProfesor;
}

Curso::Curso(String^ nombreCurso, String^ dificultad, Profesor^ objProfesor, String^ precioCurso) {
	this->nombreCurso = nombreCurso;
	this->dificultad = dificultad;
	this->objProfesor = objProfesor;
	this->precioCurso = precioCurso;
}
