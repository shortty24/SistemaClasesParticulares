#pragma once

namespace SistemaClasesParticularesController {
	using namespace SistemaClasesParticularesModel;
	using namespace System::Collections::Generic;

	public ref class ReporteController {

	private:
		List<Alumno^>^ ListaAlumnos;
		List<Profesor^>^ ListaProfesores;

	public:
			ReporteController();
			void CargarPersonasDesdeArchivo();
			int ObtenerCantidadProfesores();
			int ObtenerCantidadAlumnos();

	};
}
