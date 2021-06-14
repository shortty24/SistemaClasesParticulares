#include "PagoController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

PagoController::PagoController() {
	this->listaPago = gcnew List<Pago^>();
}
