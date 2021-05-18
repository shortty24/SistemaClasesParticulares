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
		int fechaPago;
		String^ objEstado;
		List<Inscripcion^>^ listaInscripcion;
		Administrador^ objAdministrador;

	public:
		//Pago();
		//Pago(int fechaPago, String^ objEstado, Clase^ objClase);
	};
}
