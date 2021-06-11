#include "RegistroController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;


RegistroController::RegistroController() {

	this->Repite = Repite;
	this->listaPersonas = gcnew List<Persona^>();
}

void RegistroController::CargarPersonasDesdeArchivo() {
	this->listaPersonas->Clear();
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ Usuario = palabras[2];
		String^ Contrasenha = palabras[3];
		String^ ApellidoPaterno = palabras[4];
		String^ ApellidoMaterno = palabras[5];
		String^ Nombre = palabras[6];
		Persona^ objPersona = gcnew Persona(dni, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno,  Nombre);
		this->listaPersonas->Add(objPersona);
	}
}


void RegistroController::GuardarNuevoAlumnoEnArchivo(Alumno^ objAlumno) {
		this->listaPersonas->Clear();
		CargarPersonasDesdeArchivo();
		this->listaPersonas->Add(objAlumno);

		array<String^>^ lineasArchivoPersonas = gcnew array<String^>(this->listaPersonas->Count);
		for (int i = 0; i < this->listaPersonas->Count; i++) {
			Persona^ objPersona = this->listaPersonas[i];
			lineasArchivoPersonas[i] = objPersona->dni + ";" + objPersona->objUsuario + ";" + objPersona->objContrasenha + ";" + objPersona->objApellidoPaterno + ";"+ objPersona->objApellidoMaterno + ";" +objPersona->objNombre;
		}
		/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
		File::WriteAllLines("Personas.txt", lineasArchivoPersonas);
	
}