#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class CursoController {
	private:
		List<Curso^>^ listaCursos;
		SqlConnection^ objConexion;
	public:
		CursoController();
		/*M�todos con archivos .txt*/
		void CargarCursosDesdeArchivo();
		List<Curso^>^ CursosDisponibles();
		List<Curso^>^ CursosDisponiblesxNombre(String^ nombreDelCurso);
		Curso^ CursoDisponiblexNombrexProfesor(String^ nombreDelCurso, String^ usuarioProfe);
		List<Curso^>^ CursosxUsusarioProfesor(String^ usuarioProfesor);
		void A�adirCurso(Curso^ objCurso);
		Curso^ buscarCursoxNombreCursoBD(String^ cursoBuscar);
		List<String^>^ ListaNombreCursos_BD();
		void EliminarCursoBD(String^ UsuarioProfesor,String^ curso);

		/*M�todos con base de datos*/
		void AbrirConexion();
		void CerrarConexion();
		Curso^ CursoDisponiblexNombrexProfesor_BD(String^ nombreDelCurso, String^ usuarioProfe);
		List<Curso^>^ CursosxUsusarioProfesorBD(String^ usuarioProfesor);
		void A�adirCursoBD(Curso^ objCurso);
		List<Curso^>^ CursosDisponibles_BD();
		List<Curso^>^ CursosDisponiblesxNombre_BD(String^ nombreDelCurso);
	};

}