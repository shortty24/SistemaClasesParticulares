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
			List<Horario^>^ HorarioxProfesorxCurso (String^ dniProfesor, String^ nombreDelCurso);
			List<Horario^>^ HorarioxProfesor(String^ dniProfesorBuscar);
			Horario^ buscarHorarioxDia(String^ diaBuscar);
			void editaHorarioxProfesor(String^ dniProfesorEditar, String^ nombreDelCursoEditar, String^ diaEditar, String^ horaInicio, String^ horasPedidas);
	};
}