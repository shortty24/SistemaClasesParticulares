#include "AlumnoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

AlumnoController::AlumnoController(){
	this->listaAlumnos = gcnew List<Alumno^>();
}
Alumno^ AlumnoController::buscaAlumno(String^usuarioAlumno) {
	Alumno^ objAlumnoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("alumnos.txt");
	String^ separadores = ";";
	for each (String ^ lineaAlumno in lineas) {
		array<String^>^ palabras = lineaAlumno->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];
		
		if (usuario == usuarioAlumno) {
			objAlumnoEncontrado = gcnew Alumno(dni, usuario, apellidoPaterno, apellidoMaterno, nombre);
			break;
		}
	}
}