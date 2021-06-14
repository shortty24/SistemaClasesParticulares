#include "ClaseController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

ClaseController::ClaseController() {
	this->listaClases = gcnew List<Clase^>();
}

List<Clase^>^ ClaseController::ClasesProgramadas(String^ dniProfesorBuscar){
	List<Clase^>^ listaClasesProgramadas = gcnew List<Clase^>();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");

	String^ separadores = ";";
	for each (String ^ lineaClase in lineas) {
		array<String^>^ palabras = lineaClase->Split(separadores->ToCharArray());
		String^ dniAlumno= palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ hora = palabras[3];
		String^ fecha = palabras[4];
		Inscripcion^ objInscripcion = buscarInsrcipcionxHoraxFecha(hora, fecha);
		String^ link = palabras[5];
		
		if (dniProfesor == dniProfesorBuscar) {
			Clase^ objClaseProgramada = gcnew Clase(objAlumno, objProfesor, objCurso, objInscripcion, link);
			listaClasesProgramadas->Add(objClaseProgramada);
		}
		
	}	
	return listaClasesProgramadas;
}

Alumno^ ClaseController::buscarAlumnoxDNI(String^ dniAlumno) {
	Alumno^ objAlumnoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ perfil = palabras[0];
		String^ dniPersona = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (perfil == "A") {
			if (dniPersona == dniAlumno) {
				objAlumnoEncontrado = gcnew Alumno(dniPersona, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
				break;
			}		
		}
	}
	return objAlumnoEncontrado;
}

Profesor^ ClaseController::buscarProfesorxDNI(String^ dniProfesor) {
	Profesor^ objProfesorEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ perfil = palabras[0];
		String^ dniPersona = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (perfil == "P") {
			if (dniPersona == dniProfesor) {
				objProfesorEncontrado = gcnew Profesor(dniPersona, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
				break;
			}
		}
	}
	return objProfesorEncontrado;
}

Curso^ ClaseController::buscarCursoxNombreCurso(String^ cursoBuscar) {
	Curso^ objCursoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ curso = palabras[0];
		String^ dificultad = palabras[1];
		String^ usuario = palabras[2];

		if (cursoBuscar == curso) {
			objCursoEncontrado = gcnew Curso(curso, dificultad, usuario);
			break;
		}
	}
	return objCursoEncontrado;
}

Inscripcion^ ClaseController::buscarInsrcipcionxHoraxFecha(String^ horaBuscar, String^ fechaBuscar) {
	Inscripcion^ objInscripcionEncontrada;
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ curso = palabras[1];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ hora = palabras[2];
		String^ fecha = palabras[3];

		if ((hora == horaBuscar)&&(fecha== fechaBuscar)) {
			objInscripcionEncontrada = gcnew Inscripcion(objAlumno, objCurso, hora, fecha);
			break;
		}
	}
	return objInscripcionEncontrada;
}