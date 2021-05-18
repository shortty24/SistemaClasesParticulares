#pragma once

#include "Alumno.h"


namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Inscripcion {
		private:
			int precioTotal;
			int fechaRealizacion;
			String^ estado;
			Alumno^ objAlumno;

		public:
			//Inscripcion();
			Inscripcion(int precioTotal, int fechaRealizacion, String^ estado, Alumno^ objAlumno);
	};
}
