#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;

	public ref class ProfesorController {
		private:
			List<Profesor^>^ listaProfesores;
		public:
			ProfesorController();
			Profesor^ buscaProfesor(String^ usuarioProfesor);
	};
}
