#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;

	public ref class LogeoController {

	private:
		List < Persona^ > ^ listaPersonas;

	public:
		LogeoController();
		void CargarPersonasDesdeArchivo();

	};
}