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
		List<Curso^>^ CursosDisponibles();

	};

}