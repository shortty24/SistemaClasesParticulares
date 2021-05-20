#pragma once

namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;

	public ref class ProfesorController {
		private:
			List<Profesor^>^ listaProfesores;
		public:
			ProfesorController();
	};
}
