#pragma once

#include "Clase.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Pago {

	private:
		int codigo;
		int fechaPago;
		String^ objEstado;
		Clase^ objClase;

	public:
		//Pago();
		Pago(int codigo, int fechaPago, String^ objEstado, Clase^ objClase);

	};
}
