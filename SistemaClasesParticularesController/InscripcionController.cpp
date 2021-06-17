#include "InscripcionController.h"
#include "CursoController.h"
#include "AlumnoController.h"
#include "ProfesorController.h"
using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

InscripcionController::InscripcionController() {
	this->listaInscripcion = gcnew List<Inscripcion^>();
}

List<Inscripcion^>^ InscripcionController::InscripcionesxAlumno(String^ datoAlumno) {
	this->listaInscripcion->Clear();
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ dniProfesor = palabras[1];
		String^ nombreCurso = palabras[2];
		String^ horaInscripion = palabras[3];
		String^ fechaInscripion = palabras[4];
		int horasPedidas = Convert::ToInt32(palabras[5]);
		String^ horaInicio = palabras[6];
		String^ fechaClase = palabras[7];
		String^ codigoIns = palabras[8];

		if (datoAlumno == dniAlumno) {
			AlumnoController^ gestorAlumno = gcnew AlumnoController();
			Alumno^ objAlumno = gestorAlumno->buscaAlumnoxDNI(dniAlumno);
			ProfesorController^ gestorProfesor = gcnew ProfesorController();
			Profesor^ objProfesor = gestorProfesor->buscaProfesorxDNI(dniProfesor);
			CursoController^ gestorCurso = gcnew CursoController();
			Curso^ objCurso = gestorCurso->CursoDisponiblexNombrexProfesor(nombreCurso,objProfesor->objUsuario);
			Inscripcion^ objIns = gcnew Inscripcion(objAlumno, objCurso, horaInscripion, fechaInscripion, horasPedidas, horaInicio, fechaClase, codigoIns);
			this->listaInscripcion->Add(objIns);
		}
	}
	return this->listaInscripcion;
}