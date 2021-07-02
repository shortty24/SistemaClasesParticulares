#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class QuejasController {
	private:
		List<Quejas^>^ listaQuejas;
	public:
		QuejasController();
		List<Quejas^>^ obtenerListaQuejas();
		void Procede(String^ dniseleccionado);
		void NoProcede(String^ dniseleccionado);
		List<Quejas^>^ buscarQuejaAgresor(String^ dniBuscar);
		List<Quejas^>^ buscarQuejaAgraviado(String^ dniBuscar);
		List<Quejas^>^ buscarQuejasxEstado(String^ estado);

		void CargarQuejasDesdeArchivo();
		void generarQuejaxAlumno(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo);
		int ProfesorBloqueado(String^ dniBuscar);
		void generarQuejaxProfesor(String^ dniProfesorQueja, String^ dniAlumnoQueja, String^ motivo);
	};

}