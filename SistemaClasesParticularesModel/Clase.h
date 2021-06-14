#pragma once

#include "Profesor.h"
#include "Administrador.h"
#include "Curso.h"
#include "Pago.h"
#include "Alumno.h"
#include "Inscripcion.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Clase {
		public:
			//int codigo;
			//int puntuacion;
			Alumno^ objAlumno;
			Profesor^ objProfesor;
			Administrador^ objAdministrador;
			Curso^ objCurso;
			Pago^ objPago;
			String^ objLink;
			Inscripcion^ objInscripcion;

		public:
			//Clase();
			//Clase(String^ objLink, Profesor^ objProfesor, Administrador^ objAdministrador, Curso^ objCurso, Pago^ objPago);
			Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, Inscripcion^ objInscripcion, String^ objLink);
	};
}
