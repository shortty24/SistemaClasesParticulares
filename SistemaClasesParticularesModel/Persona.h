#pragma once

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Persona {
		//por ser herencia se usa protected ya que estos se usaran en alumno y profesores
	protected:
		String^	dni;
		String^ objUsuario;
		String^ objContrasenha;
		String^ objApellidoPaterno;
		String^ objApellidoMaterno;
		String^ objNombre;

	public:
		//Persona();
		Persona(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre);
	};
}
