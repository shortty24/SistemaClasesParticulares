#pragma once

namespace SistemaClasesParticularesController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System::Data::SqlClient;

	public ref class HorarioController {
		private:
			List<Horario^>^ listaHorarios;
			SqlConnection^ objConexion;
		public:
			HorarioController();
			/*Métodos con base de datos*/
			void AbrirConexion();
			void CerrarConexion();
			List<Horario^>^ CargarHorariosDesdeArchivoBD();
			List<Horario^>^ HorarioxProfesorBD(String^ dniProfesorBuscar);
			void actualizarHorariosBD(List<String^>^ listaHorarios);
			void actualizarHorariosBD2(array<String^>^ listaHorarios);
			void insertarHorariosBD(String^ lineaTexto);

			/*Métodos con archivos .txt*/
			List<Horario^>^ CargarHorariosDesdeArchivo();
			List<Horario^>^ HorarioxProfesorxCurso (String^ dniProfesor, String^ nombreDelCurso);
			List<Horario^>^ HorarioxProfesor(String^ dniProfesorBuscar);
			Horario^ buscarHorarioxDia(String^ diaBuscar);
			void editaHorarioxProfesor(String^ dniProfesorEditar, String^ diaEditar, String^ horaInicio, String^ horasPedidas);
			List<Horario^>^ HorarioxProfesorInscripcion(String^ dniProfesor);
			//void EditarHorarioDisponibilidad(String^ dniProfesor, List<String^>^ listaHorasDisponibilidad);
	};
}