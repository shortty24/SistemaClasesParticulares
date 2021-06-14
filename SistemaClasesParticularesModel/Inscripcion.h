#pragma once

#include "Alumno.h"
#include "Curso.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Inscripcion {
		public:
			//int precioTotal;
			String^ horaRealizacion;
			String^ fechaRealizacion;
			String^ estado;
			Alumno^ objAlumno;
			Curso^ objCurso;

		public:
			//Inscripcion();
			Inscripcion(Alumno^ objAlumno, Curso^ objCurso,String^ horaRealizacion, String^ fechaRealizacion);
	};
}
