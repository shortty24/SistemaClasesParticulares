#pragma once

#include "Profesor.h"
#include "Administrador.h"
#include "Curso.h"
#include "Pago.h"
#include "Alumno.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Clase {
		public:
			//int codigo;
			//int puntuacion;
			String^ horaClase;
			String^ fechaClase;
			String^ objLink;
			Alumno^ objAlumno;
			Profesor^ objProfesor;
			Administrador^ objAdministrador;
			//Inscripcion^ objInscripcion;
			Curso^ objCurso;
			Pago^ objPago;

		public:
			//Clase();
			//Clase(String^ objLink, Profesor^ objProfesor, Administrador^ objAdministrador, Curso^ objCurso, Pago^ objPago);
			Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink);
	};
}
