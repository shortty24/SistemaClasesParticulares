#include "Inscripcion.h"

using namespace SistemaClasesParticularesModel;

Inscripcion::Inscripcion(Alumno^ objAlumno, Curso^ objCurso, String^ horaInscripcion, String^ fechaInscripcion, int tiempoReserva) {
	this->objAlumno = objAlumno;
	this->objCurso = objCurso;
	this->horaInscripcion = horaInscripcion;
	this->fechaInscripcion = fechaInscripcion;
	this->tiempoReserva = tiempoReserva;
}
Inscripcion::Inscripcion(Alumno^ objAlumno, Curso^ objCurso, String^ horaInscripcion, String^ fechaInscripcion, int tiempoReserva, String^ horaInicio, String^ fechaClase, String^ codigoIns) {
	this->objAlumno = objAlumno;
	this->objCurso = objCurso;
	this->horaInscripcion = horaInscripcion;
	this->fechaInscripcion = fechaInscripcion;
	this->tiempoReserva = tiempoReserva;
	this->horaInicio = horaInicio;
	this->fechaClase = fechaClase;
	this->codigoIns = codigoIns;
}

