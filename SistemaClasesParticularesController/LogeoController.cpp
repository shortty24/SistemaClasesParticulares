#include "LogeoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;


LogeoController::LogeoController() {

	this->listaPersonas = gcnew List<Persona^>();
	this->Existe = Existe;
	//this->usuarioAlumno = usuarioAlumno;
}

int LogeoController::VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2) {
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ dni = palabras[1];
		String^ Usuario = palabras[2];
		String^ Contrasenha = palabras[3];
		String^ ApellidoPaterno = palabras[4];
		String^ ApellidoMaterno = palabras[5];
		String^ Nombre = palabras[6];
		Persona^ objPersona = gcnew Persona(dni, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno, Nombre);
		//this->listaPersonas->Add(objPersona);
		if (textBox1 == Usuario && textBox2 == Contrasenha) {
			if (ID == "A") {
				Existe = 1;
				usuarioAlumno = textBox1;
			}
			else if (ID == "P") {
				Existe = 2;
			}
			else if (ID == "M") {
				Existe = 3;
			}
			 break;
		}
		else {
			 Existe = 0;
			
		}
	}
	return Existe;
}

/*String^ LogeoController::obtenerUsuario() {
	return usuarioAlumno;
}*/