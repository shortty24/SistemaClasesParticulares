#include "Administrador.h"

using namespace SistemaClasesParticularesModel;

Administrador::Administrador(List<Pago^>^ objListaPago, List<Profesor^>^ objListaProfesor, List<Clase^>^ objListaClase, List<Alumno^>^ objListaALumno) {
	this->objListaPago = objListaPago;
	this->objListaProfesor = objListaProfesor;
	this->objListaClase = objListaClase;
	this->objListaAlumno = objListaAlumno;
}