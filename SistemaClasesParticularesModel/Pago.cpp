#include "Pago.h"

using namespace SistemaClasesParticularesModel;

Pago::Pago(String^ fechaPago, String^ objEstado, Inscripcion^ objInscripcion, Administrador^ objAdministrador) {
	this->fechaPago = fechaPago;
	this->objEstado = objEstado;
	this->objInscripcion = objInscripcion;
	this->objAdministrador = objAdministrador;
}