#include "Clase.h"

Clase::Clase(int codigo, int puntuacion, String^ objLink, Alumno^ objAlumno, Profesor^ objProfesor) {
	this->codigo = codigo;
	this->puntuacion = puntuacion;
	this->objLink = objLink;
	this->objAlumno = objAlumno;
	this->objProfesor = objProfesor;

}