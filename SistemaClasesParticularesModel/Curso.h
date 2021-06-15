#pragma once
#include "Profesor.h"
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
		String^ usuarioProfesor;
		Profesor^ objProfesor;


	public:
		Curso(String^ nombreCurso, String^ dificultad, String^ usuarioProfesor);
		Curso(String^ nombreCurso, String^ dificultad, Profesor^ objProfesor);
		//Curso(String^ objTema, int dificultad);
	};
}
