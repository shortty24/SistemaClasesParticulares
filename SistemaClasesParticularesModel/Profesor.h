#pragma once

#include "Persona.h"
//se jala de CV los datos necesarios

#include "Administrador.h"

namespace SistemaClasesParticularesModel {
	//para usar la clase list (no olvidar poner todo junto en especial ::)
	using namespace System::Collections::Generic;

	// el : que profesor hereda de en este caso persona
	public ref class Profesor : public Persona {
		private:
			//int codigo;
			int calificacion;
			int horario;
			int precio;
			//se crea una listaCursos que sería un objeto del tipo lista de objeto cursos ( listaCursos sería un arreglo dinámico)
			
			Administrador^ objAdministrador;

		public:
			//Profesor();
			Profesor(int calificacion, int horario, int precio, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre);
	};
}
