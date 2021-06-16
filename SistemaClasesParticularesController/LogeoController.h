#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;

	public ref class LogeoController {

	private:
		//List < Persona^ >^ listaPersonas;
		int Existe;
		String^ Verificacion;
		//String^ usuarioAlumno;

	public:
		LogeoController();
		//void CargarPersonasDesdeArchivo();
		int VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2);
		//String^ VerificarValidacionCV(String^ DniProfesor);
		//String^ obtenerUsuario();
		String^ VerificarValidacionCV(String^ DNI);
	};
}