#include "Inscripcion.h"

using namespace SistemaClasesParticularesModel;

Inscripcion::Inscripcion(Alumno^ objAlumno, Curso^ objCurso, String^ horaRealizacion, String^ fechaRealizacion) {
	this->objAlumno = objAlumno;
	this->objCurso = objCurso;
	this->horaRealizacion = horaRealizacion;
	this->fechaRealizacion=fechaRealizacion;

}