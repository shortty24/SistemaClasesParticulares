#include "InscripcionController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

InscripcionController::InscripcionController() {
	this->listaInscripcion = gcnew List<Inscripcion^>();
}
