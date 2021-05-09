#pragma once

//para reconocer el String
using namespace System;

public ref class Persona {
	//por ser herencia se usa protected ya que estos se usaran en alumno y profesores
	protected:
		int		dni;
		String^ objUsuario;
		String^ objContrasenha;
		String^ objApellidoPaterno;
		String^ objApellidoMaterno;
		String^ objNombre;
		String^ objCorreo;

	public:
		//Persona();
		Persona(int dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre, String^ objCorreo)

};