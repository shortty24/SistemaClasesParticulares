#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class InscripcionController {
	private:
		List<Inscripcion^>^ listaInscripcion;
	public:
		InscripcionController();
		List<Inscripcion^>^ InscripcionesxAlumno(String^ datoAlumno);
		void GuardarInscripcion(String^ diaNuevo, String^ horaInicioNuevo, String^ tiempoPedidoNuevo, String^ nombreDelCursoNuevo, String^ dniProfesorNuevo, String^ dniAlumnoNuevo, String^ fechaInscripcionNuevo, String^ horaInscripcionNuevo);
	};

}