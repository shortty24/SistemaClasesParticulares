#pragma once
#include "Profesor.h"
namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Curso {

	public:
		//int codigo;
		String^ nombreCurso;
		//String^ objTema;
		String^ dificultad;
		List<Profesor^>^ listaProfesores;

	public:
		Curso(String^ nombreCurso, String^ dificultad);
		//Curso(String^ objTema, int dificultad);
	};
}
