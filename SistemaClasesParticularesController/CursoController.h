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
		/*Métodos con archivos .txt*/
		void CargarCursosDesdeArchivo();
		List<Curso^>^ CursosDisponibles();
		List<Curso^>^ CursosDisponiblesxNombre(String^ nombreDelCurso);
		Curso^ CursoDisponiblexNombrexProfesor(String^ nombreDelCurso, String^ usuarioProfe);
		List<Curso^>^ CursosxUsusarioProfesor(String^ usuarioProfesor);
		void AñadirCurso(Curso^ objCurso);

		/*Métodos con base de datos*/
		void AbrirConexion();
		void CerrarConexion();
		Curso^ CursoDisponiblexNombrexProfesor_BD(String^ nombreDelCurso, String^ usuarioProfe);
		List<Curso^>^ CursosxUsusarioProfesorBD(String^ usuarioProfesor);
		void AñadirCursoBD(Curso^ objCurso);
	};

}