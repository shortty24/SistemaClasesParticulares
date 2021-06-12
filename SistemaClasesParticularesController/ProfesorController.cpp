#include "ProfesorController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

ProfesorController::ProfesorController() {
	
}
Profesor^ ProfesorController::buscaProfesor(String^ usuarioProfesor) {
	Profesor^ objProfesorEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (usuario == usuarioProfesor) {
			String^ numCelular = palabras[9];
			objProfesorEncontrado = gcnew Profesor(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre, numCelular);
			break;
		}
	}
	return objProfesorEncontrado;
}

