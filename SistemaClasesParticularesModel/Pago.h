#pragma once
#include "Inscripcion.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Pago {

	public:
		//int codigo; No entiendo a qué se refiere
		Inscripcion^ objInscripcion;
		String^ estadopago;
		String^ horaPago;
		String^ fechaPago;
		String^ codigoPago;
		String^ estadoclase;

		

	public:
		//Pago();
		Pago(Inscripcion^ objInscripcion, String^ estadopago, String^ horaPago, String^ fechaPago, String^ codigoPago, String^ estadoclase);

	};
}
