#include "RegistroController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;


RegistroController::RegistroController() {

	this->Repite = Repite;
	this->listaPersonas = gcnew List<Persona^>();
	this->listaCV = gcnew List<CV^>();
}

void RegistroController::CargarPersonasDesdeArchivo() {
	this->listaPersonas->Clear();
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
			String^ codigoUsuario = palabras[0];
			String^ dni = palabras[1];
			String^ Usuario = palabras[2];
			String^ Contrasenha = palabras[3];
			String^ ApellidoPaterno = palabras[4];
			String^ ApellidoMaterno = palabras[5];
			String^ Nombre = palabras[6];
			String^ Correo = palabras[7];
			Persona^ objPersona = gcnew Persona(codigoUsuario, dni, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno, Nombre,Correo);
			this->listaPersonas->Add(objPersona);
		//}
	}
}

void RegistroController::CargarCVsDesdeArchivo() {
	this->listaCV->Clear();
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");

	String^ separadores = ";";
	for each (String ^ lineaCV in lineas) {
		array<String^>^ palabras = lineaCV->Split(separadores->ToCharArray());
		String^ DNI = palabras[0];
		String^ codigoMinedu = palabras[1];
		String^ Empresa = palabras[2];
		String^ NumeroEmpresa = palabras[3];
		String^ Validacion = palabras[4];
		CV^ objCV = gcnew CV(DNI, codigoMinedu, Empresa, NumeroEmpresa,Validacion);
		this->listaCV->Add(objCV);
	}
}


void RegistroController::GuardarNuevoUsuarioEnArchivo(Persona^ objPersona) {
		this->listaPersonas->Clear();
		//this->listaProfesores->Clear();
		CargarPersonasDesdeArchivo();
		this->listaPersonas->Add(objPersona);
		array<String^>^ lineasArchivoPersonas = gcnew array<String^>(this->listaPersonas->Count);
		for (int i = 0; i < this->listaPersonas->Count; i++) {
			Persona^ objPersona = this->listaPersonas[i];
			//Profesor^ objProfesor = this->listaProfesores[n];
				lineasArchivoPersonas[i] = objPersona->CodigoUsuario + ";" + objPersona->dni + ";" + objPersona->objUsuario + ";" + objPersona->objContrasenha + ";" + objPersona->objApellidoPaterno + ";" + objPersona->objApellidoMaterno + ";" + objPersona->objNombre + ";" + objPersona->objCorreo;
			
		}
		
		/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
		File::WriteAllLines("Personas.txt", lineasArchivoPersonas);	
}

void RegistroController::GuardarNuevoCV(CV^ objCV) {
	this->listaCV->Clear();
	//this->listaProfesores->Clear();
	CargarCVsDesdeArchivo();
	this->listaCV->Add(objCV);
	array<String^>^ lineasArchivoCV = gcnew array<String^>(this->listaCV->Count);
	for (int i = 0; i < this->listaCV->Count; i++) {
		CV^ objCV = this->listaCV[i];
		//Profesor^ objProfesor = this->listaProfesores[n];
		lineasArchivoCV[i] = objCV->DniProfesor + ";" + objCV->objCodigoMinedu + ";" + objCV->objEmpresa + ";" + objCV->telefonoEmpresa + ";" + objCV->Validación;

	}

	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("CVs.txt", lineasArchivoCV);
}
int RegistroController::VerificarSiUsuarioRepite(String^ textBox1) {
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ dni = palabras[1];
		String^ Usuario = palabras[2];
		String^ Contrasenha = palabras[3];
		String^ ApellidoPaterno = palabras[4];
		String^ ApellidoMaterno = palabras[5];
		String^ Nombre = palabras[6];

		if (textBox1 == Usuario) {
			Repite = 1; // Si		
			break;
		}
		else {
			Repite = 0; // No

		}
	}
	return Repite;
}

int RegistroController::VerificarSiDniRepite(String^ textBox2) {
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ dni = palabras[1];
		String^ Usuario = palabras[2];
		String^ Contrasenha = palabras[3];
		String^ ApellidoPaterno = palabras[4];
		String^ ApellidoMaterno = palabras[5];
		String^ Nombre = palabras[6];

		if (textBox2 == dni) {
			Repite = 1; //Si
			break;
		}
		else {
			Repite = 0; // No

		}
	}
	return Repite;
}