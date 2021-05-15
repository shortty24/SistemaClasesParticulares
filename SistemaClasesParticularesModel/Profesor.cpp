#include "Profesor.h"

using namespace SistemaClasesParticularesModel;

Profesor::Profesor(int codigo, int calificacion, int horario, int precio, CV^ objCV, List<Curso^>^ objListaCursos) {
	this->codigo = codigo;
	this->calificacion = calificacion;
	this->horario = horario;
	this->precio = precio;
	this->objCV = objCV;
	this->objListaCursos = objListaCursos;
	

}