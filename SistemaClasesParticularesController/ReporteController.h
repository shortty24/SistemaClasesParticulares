#pragma once

namespace SistemaClasesParticularesController {
	using namespace SistemaClasesParticularesModel;
	using namespace System::Collections::Generic;
	using namespace System::Data::SqlClient;

	public ref class ReporteController {

	private:
		//List<Alumno^>^ ListaAlumnos;
		//List<Profesor^>^ ListaProfesores;
		//List<Quejas^>^ ListaQuejasResueltas;
		//List<Quejas^>^ ListaQuejasNoResueltas;
		SqlConnection^ objConexion;
		int CantidadAlumnos;
		int CantidadProfesores;
		int CantidadQuejasResueltas;
		int CantidadQuejasNoResueltas;

	public:
			ReporteController();
			void AbrirConexion();
			void CerrarConexion();
			//void CargarPersonasDesdeArchivo();
			//void CargarQuejasDesdeArchivo();
			int ObtenerCantidadProfesores();
			int ObtenerCantidadAlumnos();
			int ObtenerCantidadQuejasResueltas();
			int ObtenerCantidadQuejasNoResueltas();


	};
}
