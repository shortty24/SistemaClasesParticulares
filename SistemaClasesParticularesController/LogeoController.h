#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;

	public ref class LogeoController {

	private:
		//List < Persona^ >^ listaPersonas;
		int Existe;

	public:
		LogeoController();
		//void CargarPersonasDesdeArchivo();
		int VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2);
	};
}