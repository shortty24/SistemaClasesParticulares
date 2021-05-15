#include "Curso.h"

using namespace SistemaClasesParticularesModel;

Curso::Curso(int codigo, String^ objTema, int dificultad) {
	this->codigo = codigo;
	this->objTema = objTema;
	this->dificultad = dificultad;

}