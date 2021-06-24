#pragma once

namespace SistemaClasesParticularesModel {
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;

	public ref class Horario{
		public:
			String^ dniProfesor;
			String^ dia;
			String^ curso;
			List<String^>^ horasDisponibles;
	    public:
			Horario(String^ dniProfesor, String^ dia, List<String^>^ horasDisponibles);
			Horario(String^ dniProfesor, String^ dia, List<String^>^ horasDisponibles, String^ curso);
	};
}