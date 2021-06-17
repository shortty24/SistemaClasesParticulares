#pragma once

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class ReporteUsuarios {

	public:
		int cantAlumnos;
		int cantProfesores;


	public:

		ReporteUsuarios(int cantAlumnos, int cantProfesores);
	};
}
