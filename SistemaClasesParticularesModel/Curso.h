#pragma once

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Curso {

	public:
		//int codigo;
		String^ nombreCurso;
		//String^ objTema;
		String^ dificultad;
		//List<Profesor^>^ listaProfesores;

	public:
		Curso(String^ nombreCurso, String^ dificultad);
		//Curso(String^ objTema, int dificultad);
	};
}
