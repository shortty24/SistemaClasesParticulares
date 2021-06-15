#pragma once

namespace SistemaEleccionesEstudiantilController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	public ref class HorarioController {
		private:
			List<Horario^>^ listaHorarios;
		public:
			HorarioController();

	};
}