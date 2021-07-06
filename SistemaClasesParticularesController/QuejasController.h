#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class QuejasController {
	private:
		List<Quejas^>^ listaQuejas;
		SqlConnection^ objConexion;

	public:
		QuejasController();
		void AbrirConexion();
		void CerrarConexion();
		int ProfesorBloqueado_BD(String^ dniBuscar);
		void generarQuejaxAlumno_BD(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo);

		List<Quejas^>^ obtenerListaQuejas();
		void Procede(String^ dniseleccionado);
		void NoProcede(String^ dniseleccionado);
		List<Quejas^>^ buscarQuejaAgresor(String^ dniBuscar);
		List<Quejas^>^ buscarQuejaAgraviado(String^ dniBuscar);
		List<Quejas^>^ buscarQuejasxEstado(String^ estado);

		void CargarQuejasDesdeArchivo();
		void generarQuejaxAlumno(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo);
		int ProfesorBloqueado(String^ dniBuscar);
		void generarQuejaxProfesor(String^ dniAgredidoProfesor, String^ dniAgresoAlumno, String^ motivo);
	};

}