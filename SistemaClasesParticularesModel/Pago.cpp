#include "Pago.h"

using namespace SistemaClasesParticularesModel;

Pago::Pago(Inscripcion^ objInscripcion, String^ estadopago, String^ horaPago, String^ fechaPago, String^ codigoPago, String^ estadoclase) {

	this->objInscripcion = objInscripcion;
	this->estadopago = estadopago;
	this->horaPago = horaPago;
	this->fechaPago = fechaPago;
	this->codigoPago = codigoPago;
	this->estadoclase = estadoclase;

}