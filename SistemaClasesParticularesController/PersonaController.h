#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class PersonaController {
	private:
		List <Persona^>^ listaPersonas;
	public:
		PersonaController();
		//void CargarDatosDesdeArchivo();
	};
}