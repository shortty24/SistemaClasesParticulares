#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class ClaseController {
	private:
		List<Clase^>^ listaClases;
	public:
		ClaseController();
		List<Clase^>^ ClasesProgramadas(String^ dniProfesorBuscar);
		Alumno^ buscarAlumnoxDNI(String^ dniAlumno);
		Profesor^ buscarProfesorxDNI(String^ dniProfesor);
		Curso^ buscarCursoxNombreCurso(String^ cursoBuscar);
		Inscripcion^ buscarInscripcionxHoraxFecha(String^ horaBuscar, String^ fechaBuscar);

	};

}