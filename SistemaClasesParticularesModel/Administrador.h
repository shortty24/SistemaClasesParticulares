#pragma once
//esta jalando de persona esto se combina con el : de public ref class
//AEA
#include "Persona.h"

#include "Pago.h"

#include "Profesor.h"

#include "Alumno.h"

#include "Clase.h"

//para usar la clase list (no olvidar poner todo junto en especial ::)
using namespace System::Collections::Generic;

// el : que administrador hereda de en este caso persona
public ref class Administrador : public Persona {
	private:

		int codigo;
		//Lista
		List<Pago^>^ objListaPago;
		List<Profesor^>^ objListaProfesor;
		List<Clase^>^ objListaClase;
		List<Alumno^>^ objListaAlumno;

	public:
		//Administrador();
		Administrador(List<Pago^>^ objListaPago, List<Profesor^>^ objListaProfesor, List<Clase^>^ objListaClase, List<Alumno^>^ objListaALumno);

};

