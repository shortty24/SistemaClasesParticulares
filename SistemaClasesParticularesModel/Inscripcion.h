#pragma once

#include "Alumno.h"
#include "Curso.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Inscripcion {
		public:
			String^ horaInscripcion;
			String^ fechaInscripcion;
			int tiempoReserva;
			String^ horaInicio;
			String^ fechaClase;
			//String^ estado;
			Alumno^ objAlumno;
			Curso^ objCurso;
			String^ codigoIns;

		public:
			//Inscripcion();
			Inscripcion(Alumno^ objAlumno, Curso^ objCurso, String^ horaInscripcion, String^ fechaInscripcion, int tiempoReserva);
			Inscripcion(Alumno^ objAlumno, Curso^ objCurso, String^ horaInscripcion, String^ fechaInscripcion, int tiempoReserva, String^ horaInicio, String^ fechaClase, String^ codigoIns);
			Inscripcion(Alumno^ objAlumno, String^ codigoIns, int tiempoReserva, String^ horaInicio);
			Inscripcion(String^ codigoIns);
	};
}
