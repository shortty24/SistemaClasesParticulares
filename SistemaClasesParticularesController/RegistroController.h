#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;

	public ref class RegistroController {

	private:
		int Repite;
		List < Persona^ >^ listaPersonas;
		List < CV^ >^ listaCV;

	public:
		RegistroController();
		void CargarPersonasDesdeArchivo();
		//void RegistroNuevoAlumno(String^ textBox1, String^ textBox2, String^ textBox3, String^ textBox4, String^ textBox5, String^ textBox6, String^ textBox7);
		int VerificarSiUsuarioRepite(String^ textBox1);
		void GuardarNuevoUsuarioEnArchivo(Persona^objPersona);
		void CargarCVsDesdeArchivo();
		void GuardarNuevoCV(CV^ objCV);

	};
}
