#pragma once
#include "Persona.h"
//esta jalando de persona esto se combina con el : de public ref class



namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	//Hereda de persona
	public ref class Alumno : public Persona {

	private:
		//int codigo;
		int horasPedidas;
		//se crea una listaInscripcion que ser�a un objeto del tipo lista de objeto inscripcion ( listaInscripcion ser�a un arreglo din�mico)


	public:
		Alumno(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre);
		Alumno(String^ codigoUsuario, String^ objUsuario, String^ dni, String^ objNombre, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objCorreo, String^ objContrasenha);
		Alumno(String^ dni, String^ objNombre, String^ objApellidoPaterno, String^ objApellidoMaterno);
	};
}

