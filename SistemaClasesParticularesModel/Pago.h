#pragma once
#include "Inscripcion.h"
#include "Administrador.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Pago {

	private:
		//int codigo; No entiendo a qué se refiere
		String^ fechaPago;
		String^ objEstado;
		Inscripcion^ objInscripcion;
		Administrador^ objAdministrador;

	public:
		//Pago();
		Pago(String^ fechaPago, String^ objEstado, Inscripcion^ objInscripcion, Administrador^ objAdministrador);
	};
}
