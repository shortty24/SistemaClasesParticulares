#pragma once
#include "Persona.h"
//esta jalando de persona esto se combina con el : de public ref class

#include "Administrador.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	//Hereda de persona
	public ref class Alumno : public Persona {

	private:
		//int codigo;
		int horasPedidas;
		//se crea una listaInscripcion que ser�a un objeto del tipo lista de objeto inscripcion ( listaInscripcion ser�a un arreglo din�mico)
		Administrador^ objAdministrador;

	public:
		//Alumno();
		Alumno(int horasPedidas, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre);

	};
}

