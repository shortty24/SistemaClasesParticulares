#include "Alumno.h"

using namespace SistemaClasesParticularesModel;

Alumno::Alumno(int codigo, int horasPedidas, List<Inscripcion^>^ objListaInscripcion) {
	this->codigo = codigo;
	this->horasPedidas = horasPedidas;
	this->objListaInscripcion = objListaInscripcion;

}