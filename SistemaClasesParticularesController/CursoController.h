#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class CursoController {
	private:
		List<Curso^>^ listaCursos;
	public:
		CursoController();
		void CargarCursosDesdeArchivo();
		List<Curso^>^ CursosDisponibles();
		List<Curso^>^ CursosDisponiblesxNombre(String^ nombreDelCurso);
		Curso^ CursoDisponiblexNombrexProfesor(String^ nombreDelCurso, String^ usuarioProfe);
		List<Curso^>^ CursosxUsusarioProfesor(String^ usuarioProfesor);
		void AñadirCurso(Curso^ objCurso);
	};

}