#pragma once

#include "Pago.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Inscripcion {

	private:

		int codigo;
		int precioTotal;
		int fechaRealizacion;
		String^ objEstado;
		Pago^ objPago;


	public:
		//Inscripcion();


	};
}