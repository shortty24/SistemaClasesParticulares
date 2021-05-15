#pragma once


//esta jalando de persona esto se combina con el : de public ref class
#include "Persona.h"
#include "Inscripcion.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	//para usar la clase list (no olvidar poner todo junto en especial ::)
	using namespace System::Collections::Generic;

	// el : que alumno hereda de en este caso persona
	public ref class Alumno : public Persona {

	private:
		int codigo;
		int horasPedidas;
		//se crea una listaInscripcion que sería un objeto del tipo lista de objeto inscripcion ( listaInscripcion sería un arreglo dinámico)
		List<Inscripcion^>^ objListaInscripcion;


	public:
		//Alumno();
		Alumno(int codigo, int horasPedidas, List<Inscripcion^>^ objListaInscripcion);

	};
}

