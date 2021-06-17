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
		Inscripcion^ objInscripcion = buscarInscripcionxHoraxFecha(hora, fecha);
		String^ link = palabras[5];
		
		if (dniProfesor == dniProfesorBuscar) {
			Clase^ objClaseProgramada = gcnew Clase(objAlumno, objProfesor, objCurso, hora, fecha, link);
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
		String^ tarifa= palabras[1];
		String^ dificultad = palabras[2];
		String^ usuario = palabras[3];

		if (cursoBuscar == curso) {
			objCursoEncontrado = gcnew Curso(curso, tarifa, dificultad, usuario);
			break;
		}
	}
	return objCursoEncontrado;
}

Inscripcion^ ClaseController::buscarInscripcionxHoraxFecha(String^ horaBuscar, String^ fechaBuscar) {
	Inscripcion^ objInscripcionEncontrada;
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniProfesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horaInscripcion = palabras[3];
		String^ fechaInscripcion = palabras[4];
		int tiempoReserva = Convert::ToInt32(palabras[5]);
		String^ horaClase = palabras[6];
		String^ fechaClase= palabras[7];
		int codigo = Convert::ToInt32(palabras[8]);

		if ((horaClase == horaBuscar)&&(fechaClase == fechaBuscar)) {
			objInscripcionEncontrada = gcnew Inscripcion(objAlumno, objCurso, horaInscripcion, fechaInscripcion, tiempoReserva);
			break;
		}
	}
	return objInscripcionEncontrada;
}

void ClaseController::CargarClaseDesdeArchivo() {
	this->listaClases->Clear();
	array<String^>^ lineas = File::ReadAllLines("Clases.txt");

	String^ separadores = ";";
	for each (String ^ lineaClases in lineas) {
		array<String^>^ palabras = lineaClases->Split(separadores->ToCharArray());
		String^ dnialumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dnialumno);
		String^ dniprofesor = palabras[1];
		Profesor^ objProfesor = buscarProfesorxDNI(dniprofesor);
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horaclase = palabras[3];
		String^ fecha = palabras[4];
		String^ link = palabras[5];
		Clase^ objClase = gcnew Clase(objAlumno, objProfesor, objCurso, horaclase, fecha, link);
		this->listaClases->Add(objClase);
	}
}


void ClaseController::enviarlink(String^ linkclase, String^ dnialumno) {
	this->listaClases->Clear();
	CargarClaseDesdeArchivo();
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		if (objClase->objAlumno->dni == dnialumno) {
			this->listaClases[i]->objLink = linkclase;
			break;
		}
	}

	array<String^>^ lineasArchivoClases = gcnew array<String^>(this->listaClases->Count);
	for (int i = 0; i < this->listaClases->Count; i++) {
		Clase^ objClase = this->listaClases[i];
		lineasArchivoClases[i] = objClase->objAlumno->dni + ";" + objClase->objProfesor->dni + ";" + objClase->objCurso->nombreCurso + ";" + objClase->horaClase + ";" + objClase->fechaClase + ";" + objClase->objLink;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Clases.txt", lineasArchivoClases);

}





