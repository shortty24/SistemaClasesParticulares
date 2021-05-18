#pragma once
//esta jalando de persona esto se combina con el : de public ref class
#include "Persona.h"


namespace SistemaClasesParticularesModel{
	//para usar la clase list (no olvidar poner todo junto en especial ::)
	using namespace System::Collections::Generic;

	// el : que administrador hereda de en este caso persona
	public ref class Administrador : public Persona {
		private:


		public:
			//Administrador();
			Administrador(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre);

	};
}
