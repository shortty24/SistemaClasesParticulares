#pragma once
//esta jalando de persona esto se combina con el : de public ref class
#include "Persona.h"


//se jala de CV los datos necesarios
#include "CV.h"
#include "Curso.h"


//para usar la clase list (no olvidar poner todo junto en especial ::)
using namespace System::Collections::Generic;

// el : que profesor hereda de en este caso persona
public ref class Profesor : public Persona {
	private:

		int codigo;
		int calificacion;
		int horario;
		int precio;
		CV^ objCV;
		//se crea una listaCursos que ser�a un objeto del tipo lista de objeto cursos ( listaCursos ser�a un arreglo din�mico)
		List<Curso^>^ objListaCursos;


	public:
		//Profesor();
		Profesor(int codigo, int calificacion, int horario, int precio, CV^ objCV, List<Curso^>^ objListaCursos);

};