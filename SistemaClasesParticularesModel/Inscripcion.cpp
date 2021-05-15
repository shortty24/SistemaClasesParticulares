#include "Inscripcion.h"

using namespace SistemaClasesParticularesModel;

Inscripcion::Inscripcion(int codigo, int precioTotal, int fechaRealizacion, String^ objEstado, Pago^ objPago) {
	this->codigo = codigo;
	this->precioTotal = precioTotal;
	this->fechaRealizacion=fechaRealizacion;
	this->objEstado = objEstado;
	this->objPago = objPago;

}