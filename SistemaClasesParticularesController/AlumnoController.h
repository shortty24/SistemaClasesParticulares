#pragma once
namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class AlumnoController{
		private:
			List<Alumno^>^ listaAlumnos;
			SqlConnection^ objConexion;
		public:
			AlumnoController();
			/*Métodos con base de datos*/
			void AbrirConexion();
			void CerrarConexion();
			Alumno^ buscaAlumnoBD(String^ usuarioAlumno);
			Alumno^ buscaAlumnoxDNI_BD(String^ dniAlumno);
			List<Alumno^>^ buscarAlumnosPotencialesAQuejaBD(String^ dniProfesor);
			Alumno^ buscaAlumnoxNombre_BD(String^ NombreAlumno);

			/*Métodos con archivos .txt*/
			Alumno^ buscaAlumno(String^ usuarioAlumno);
			Alumno^ buscaAlumnoxDNI(String^ dniAlumno);

	};
}