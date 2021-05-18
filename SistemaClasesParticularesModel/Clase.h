#pragma once

#include "Profesor.h"
#include "Administrador.h"
#include "Curso.h"
#include "Pago.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Clase {
		private:
			//int codigo;
			int puntuacion;
			String^ link;
			Profesor^ objProfesor;
			Administrador^ objAdministrador;
			Curso^ objCurso;
			Pago^ objPago;
			

		public:
			//Clase();
			//Clase(int puntuacion, String^ objLink, Alumno^ objAlumno, Profesor^ objProfesor);
	};
}
