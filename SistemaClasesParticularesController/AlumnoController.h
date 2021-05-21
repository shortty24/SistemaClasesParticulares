#pragma once
namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class AlumnoController{
		private:
			List < Alumno^ >^ listaAlumnos;
		public:
			AlumnoController();
			Alumno^ buscaAlumno(String^ usuarioAlumno);
	};
}