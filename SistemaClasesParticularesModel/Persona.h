#pragma once

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Persona {
		//por ser herencia se usa protected ya que estos se usaran en alumno y profesores
	protected:

		int		dni;
		String^ usuario;
		String^ contraseña;
		String^ apellidoPaterno;
		String^ apellidoMaterno;
		String^ nombre;
		String^ correo;

	public:
		//Persona();





	};
}