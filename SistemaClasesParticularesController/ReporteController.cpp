#include "ReporteController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

ReporteController::ReporteController(){

	this->ListaAlumnos = gcnew List<Alumno^>();
	this->ListaProfesores = gcnew List<Profesor^>();

}


void ReporteController::CargarPersonasDesdeArchivo() {

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
		String^ Correo = palabras[7];

		if (ID == "A") {
			Alumno^ objAlumno = gcnew Alumno(ID, Usuario, dni, Nombre, ApellidoPaterno, ApellidoMaterno, Correo, Contrasenha);
			this->ListaAlumnos->Add(objAlumno);
			;
		}
		else if (ID == "P") {
			Profesor^ objProfesor = gcnew Profesor(ID, Usuario, dni, Nombre, ApellidoPaterno, ApellidoMaterno, Correo, Contrasenha);
			this->ListaProfesores->Add(objProfesor);
		}
	}
}
int ReporteController::ObtenerCantidadProfesores() {
	
	return this->ListaProfesores->Count;
	
}
int ReporteController::ObtenerCantidadAlumnos() {

	return this->ListaAlumnos->Count;

}