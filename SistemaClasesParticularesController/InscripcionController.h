#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class InscripcionController {
	private:
		List<Inscripcion^>^ listaInscripcion;
		SqlConnection^ objConexion;
	public:
		InscripcionController();
		List<Inscripcion^>^ InscripcionesxAlumno(String^ datoAlumno);
		void GuardarInscripcion(String^ diaNuevo, String^ horaInicioNuevo, String^ tiempoPedidoNuevo, String^ nombreDelCursoNuevo, String^ dniProfesorNuevo, String^ dniAlumnoNuevo, String^ fechaInscripcionNuevo, String^ horaInscripcionNuevo);
		String^ InscripcionController::EstadoBonoxAlumno(String^ dniAlumnoBuscar);
		void InscripcionController::ModificaEstadoBonoxAlumno(String^ dniAlumnoBuscar);
		String^ InscripcionController::codigoInsxProfesorxDiaxHora(String^ dniProfesorBuscar, String^ diafechaClase, String^ horaInicioBuscar);
		//Inscripcion^ ObtenerObjetoInscripcionxCodigoPagoBD(String^ CodigoPago);
		Alumno^ buscaAlumnoxDNIBD(String^ dniAlumno);
		void AbrirConexion();
		void CerrarConexion();

		List<Inscripcion^>^ InscripcionesxAlumno_BD(String^ datoAlumno);
		void GuardarInscripcion_BD(String^ diaNuevo, String^ horaInicioNuevo, String^ tiempoPedidoNuevo, String^ nombreDelCursoNuevo, String^ dniProfesorNuevo, String^ dniAlumnoNuevo, String^ fechaInscripcionNuevo, String^ horaInscripcionNuevo);
		String^ EstadoBonoxAlumno_BD(String^ dniAlumnoBuscar);
		void ModificaEstadoBonoxAlumno_BD(String^ dniAlumnoBuscar);
		Profesor^ buscaProfesorxDNI_BD(String^ dniProfesor);
		Alumno^ buscaAlumnoxDNI_BD(String^ dniAlumno);
		Inscripcion^ buscarInscripcionxcodigo_BD(int codigoInscripcion);
		String^ codigoInsxProfesorxDiaxHora_BD(String^ dniProfesorBuscar, String^ diafechaClase, String^ horaInicioBuscar);
	};

}