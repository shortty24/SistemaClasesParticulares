#pragma once

#include "Alumno.h"
#include "Profesor.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Clase {

	private:

		int codigo;
		int puntuacion;
		String^ objLink;
		Alumno^ objAlumno;
		Profesor^ objProfesor;

	public:
		//Clase();
		Clase(int codigo, int puntuacion, String^ objLink, Alumno^ objAlumno, Profesor^ objProfesor);
	};
}
