#include "Clase.h"

using namespace SistemaClasesParticularesModel;

Clase::Clase(int codigo, int puntuacion, String^ objLink, Alumno^ objAlumno, Profesor^ objProfesor) {
	this->codigo = codigo;
	this->puntuacion = puntuacion;
	this->objLink = objLink;
	this->objAlumno = objAlumno;
	this->objProfesor = objProfesor;

}