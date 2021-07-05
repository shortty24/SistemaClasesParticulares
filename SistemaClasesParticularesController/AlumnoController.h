#pragma once
namespace SistemaClasesParticularesController {

	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class AlumnoController{
		private:
			List < Alumno^ >^ listaAlumnos;
			SqlConnection^ objConexion;
		public:
			AlumnoController();
			Alumno^ buscaAlumno(String^ usuarioAlumno);
			Alumno^ buscaAlumnoxDNI(String^ dniAlumno);
			void AbrirConexion();
			void CerrarConexion();
			Alumno^ buscaAlumnoBD(String^ usuarioAlumno);
			Alumno^ buscaAlumnoxDNI_BD(String^ dniAlumno);
	};
}