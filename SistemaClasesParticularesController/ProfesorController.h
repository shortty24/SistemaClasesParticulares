#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class ProfesorController {
		private:
			List<Profesor^>^ listaProfesores;
			SqlConnection^ objConexion;
		public:
			ProfesorController();
			Profesor^ buscaProfesor(String^ usuarioProfesor);
			String^ obtenerUsuarioxNombreCompleto(String^ nombreCompleto);
			String^ obtenerdnixNombreCompleto(String^ nombreCompleto);
			Profesor^ buscaProfesorxDNI(String^ dniProfe);
			void AbrirConexion();
			void CerrarConexion();


	};
}
