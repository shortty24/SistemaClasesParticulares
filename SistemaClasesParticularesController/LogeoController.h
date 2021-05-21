#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;

	public ref class LogeoController {

	private:
		//List < Persona^ >^ listaPersonas;
		int Existe;
		//String^ usuarioAlumno;

	public:
		LogeoController();
		//void CargarPersonasDesdeArchivo();
		int VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2);
		//String^ obtenerUsuario();
	};
}