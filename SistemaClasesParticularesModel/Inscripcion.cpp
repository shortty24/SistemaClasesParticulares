#include "Inscripcion.h"

using namespace SistemaClasesParticularesModel;

Inscripcion::Inscripcion(int precioTotal, int fechaRealizacion, String^ estado, Alumno^ objAlumno) {
	this->precioTotal = precioTotal;
	this->fechaRealizacion=fechaRealizacion;
	this->estado = estado;
	this->objAlumno = objAlumno;

}