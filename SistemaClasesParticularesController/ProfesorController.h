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
			/*M�todos con base de datos*/
			void AbrirConexion();
			void CerrarConexion();
			Profesor^ buscaProfesorxDNI_BD(String^ dniProfesor);
			String^ obtenerUsuarioxNombreCompleto_BD(String^ nombreCompleto);
			String^ obtenerdnixNombreCompleto_BD(String^ nombreCompleto);

			/*M�todos con archivos .txt*/
			Profesor^ buscaProfesor(String^ usuarioProfesor);
			String^ obtenerUsuarioxNombreCompleto(String^ nombreCompleto);
			String^ obtenerdnixNombreCompleto(String^ nombreCompleto);
			Profesor^ buscaProfesorxDNI(String^ dniProfe);

	};
}
