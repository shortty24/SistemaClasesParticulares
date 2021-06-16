#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class CVController {
	private:
		List<CV^>^ listaCV;
	public:
		CVController();
		String^ obtenerEmpresaRef(String^ dniProfesor);
		List<CV^>^ obtenerListaCVs();
		List<CV^>^ buscarCVxEstado(String^ estado);
		void aprobarCV(String^ dniseleccionado);
		void desaprobarCV(String^ dniseleccionado);

		List<CV^>^ buscarCV(String^ dniBuscar);

		void CargarCVDesdeArchivo();
	};

}