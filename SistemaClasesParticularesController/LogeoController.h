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
		String^ Estado;
		//String^ usuarioAlumno;

	public:
		LogeoController();
		//void CargarPersonasDesdeArchivo();
		int VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2);
		//String^ VerificarValidacionCV(String^ DniProfesor);
		//String^ obtenerUsuario();
		String^ VerificarValidacionCV(String^ DNI);
		String^ VerificarEstadoUsuario(String^ DNI); // Se verifica si está bloqueado o no
	};
}