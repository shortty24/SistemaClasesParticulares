#pragma once

namespace SistemaClasesParticularesController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	public ref class HorarioController {
		private:
			List<Horario^>^ listaHorarios;
		public:
			HorarioController();
			List<Horario^>^ HorarioxProfesor(String^ dniProfesor);
	};
}