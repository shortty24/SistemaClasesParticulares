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
			String^ DniAlumno;
			String^ DniProfesor;
			String^ NombreCurso;
			int CodigoInscripcion;

			Alumno^ objAlumno;
			Profesor^ objProfesor;
			Administrador^ objAdministrador;
			//Inscripcion^ objInscripcion;
			Curso^ objCurso;
			Pago^ objPago;
			String^ estadopagoprofesor;
			String^ EstadoLink;

		public:
			//Clase();
			//Clase(String^ objLink, Profesor^ objProfesor, Administrador^ objAdministrador, Curso^ objCurso, Pago^ objPago);
			Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink);
			Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink, Pago^ objPago, String^ estadopagoprofesor);
			Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink, Pago^ objPago, String^ EstadoLink, String^ estadopagoprofesor);
			Clase(String^DniAlumno, String^ DniProfesor, String^ NombreCurso, String^ horaClase, String^ fechaClase, String^ objLink,int CodigoInscripcion, String^ EstadoLink, String^ estadopagoprofesor);
	};
}
