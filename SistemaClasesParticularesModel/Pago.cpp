#include "Pago.h"

using namespace SistemaClasesParticularesModel;

Pago::Pago(int codigo, int fechaRealizacion, String^ objEstado, Clase^ objClase) {
	this->codigo = codigo;
	this->fechaPago = fechaPago;
	this->objEstado = objEstado;
	this->objClase = objClase;

}