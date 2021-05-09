#pragma once

//para reconocer el String
using namespace System;

public ref class Curso {

	private:
		int codigo;
		String^ objTema;
		int dificultad;

	public:
		//Curso();
		Curso(int codigo, String^ objTema, int dificultad);
};