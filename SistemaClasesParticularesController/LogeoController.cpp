#include "LogeoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

LogeoController::LogeoController() {

	this->listaPersonas = gcnew List<Persona^>();
}

void LogeoController::CargarPersonasDesdeArchivo() {
	array<String^>^ lineas = File::ReadAllLines("Alumnos.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ Usuario = palabras[1];
		String^ Contrasenha = palabras[2];
		String^ ApellidoPaterno = palabras[3];
		String^ ApellidoMaterno = palabras[4];
		String^ Nombre = palabras[5];
		Persona^ objPersona = gcnew Persona(dni,Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno,Nombre);
	}
}


