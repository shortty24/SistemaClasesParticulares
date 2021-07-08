#pragma once

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class ReporteCursos {

	public:
		String^ nombreCurso;
		int cantidad;

	public:
		ReporteCursos(String^ nombreCurso, int cantidad);
	};
}