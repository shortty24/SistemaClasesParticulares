#pragma once

namespace SistemaClasesParticularesController {
	using namespace SistemaClasesParticularesModel;
	using namespace System::Collections::Generic;

	public ref class ReporteController {

	private:
		List<Alumno^>^ ListaAlumnos;
		List<Profesor^>^ ListaProfesores;
		List<Quejas^>^ ListaQuejasResueltas;
		List<Quejas^>^ ListaQuejasNoResueltas;

	public:
			ReporteController();
			void CargarPersonasDesdeArchivo();
			void CargarQuejasDesdeArchivo();
			int ObtenerCantidadProfesores();
			int ObtenerCantidadAlumnos();
			int ObtenerCantidadQuejasResueltas();
			int ObtenerCantidadQuejasNoResueltas();


	};
}
