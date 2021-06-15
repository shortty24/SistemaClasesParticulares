#pragma once

namespace SistemaClasesParticularesModel {
	using namespace System;
	using namespace System::Collections;
	using namespace System::Collections::Generic;

	public ref class Horario{
		public:
			String^ dniProfesor;
			String^ dia;
			List<String^>^ horasDisponibles;
	    public:
			Horario(String^ dniProfesor, String^ dia, List<String^>^ horasDisponibles);
	};
}