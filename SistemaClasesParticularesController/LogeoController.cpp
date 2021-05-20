#include "LogeoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;


LogeoController::LogeoController() {

	this->listaPersonas = gcnew List<Persona^>();
	this->Existe = Existe;
}

int LogeoController::VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2) {
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ Usuario = palabras[1];
		String^ Contrasenha = palabras[2];
		String^ ApellidoPaterno = palabras[3];
		String^ ApellidoMaterno = palabras[4];
		String^ Nombre = palabras[5];
		Persona^ objPersona = gcnew Persona(dni, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno, Nombre);
		//this->listaPersonas->Add(objPersona);
		if (textBox1 == Usuario && textBox2 == Contrasenha) {
			int Existe = 1;
			return Existe;
		}
		else {
			int Existe = 0;
			return Existe;
		}
		//return Existe;
	}
}