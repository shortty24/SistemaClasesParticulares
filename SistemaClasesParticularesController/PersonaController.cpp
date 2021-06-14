#include "PersonaController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

PersonaController::PersonaController() {
	this->listaPersonas = gcnew List<Persona^>();
}

/*void PersonaController::CargarDatosDesdeArchivo() {
	this->listaPersonas->Clear();
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		int codigoPartido = Convert::ToInt32(palabras[0]);
		String^ dni = palabras[1];
		String^ objUsuario = palabras[2];
		String^ objContrasenha = palabras[3];
		String^ objApellidoPaterno = palabras[4];
		String^ objApellidoMaterno= palabras[5];
		String^ objNombre = palabras[6];

	}
}*/





