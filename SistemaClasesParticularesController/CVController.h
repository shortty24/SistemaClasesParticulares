#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class CVController {
	private:
		List<CV^>^ listaCV;
		SqlConnection^ objConexion;
	public:
		CVController();

		void AbrirConexion();
		void CerrarConexion();
		String^ obtenerEmpresaRef_BD(String^ dniProfesor);
		int EstadoCV_BD(String^ dniProfe);

		String^ obtenerEmpresaRef(String^ dniProfesor);
		List<CV^>^ obtenerListaCVs();
		List<CV^>^ buscarCVxEstado(String^ estado);
		void aprobarCV(String^ dniseleccionado);
		void desaprobarCV(String^ dniseleccionado);

		List<CV^>^ buscarCV(String^ dniBuscar);
		int EstadoCV(String^ dniProfe);
		void CargarCVDesdeArchivo();
	};

}