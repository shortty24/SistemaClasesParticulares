#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data;
	using namespace System::Data::SqlClient;

	public ref class RegistroController {

	private:
		int Repite;
		List < Persona^ >^ listaPersonas;
		List < CV^ >^ listaCV;
		List <BonusAlumno^>^ listaBonus;
		SqlConnection^ objConexion;

	public:
		RegistroController();
		//void CargarPersonasDesdeArchivo();
		//void RegistroNuevoAlumno(String^ textBox1, String^ textBox2, String^ textBox3, String^ textBox4, String^ textBox5, String^ textBox6, String^ textBox7);
		int VerificarSiUsuarioRepite(String^ textBox1);
		int VerificarSiDniRepite(String^ textBox2);
		void GuardarNuevoUsuarioEnBD(Persona^objPersona);
		void GuardarNuevoBonusAlumnoEnBD(BonusAlumno^ objBonus);
		//void CargarCVsDesdeArchivo();
		//void CargarBonusDesdeArchivo();
		void GuardarNuevoCV(CV^ objCV);
		void AbrirConexion();
		void CerrarConexion();

	};
}
