#pragma once

using namespace System::Collections::Generic;
using namespace SistemaClasesParticularesModel;
using namespace System;
using namespace System::Data;
using namespace System::Data::Common;
using namespace System::Data::SqlClient;


namespace SistemaClasesParticularesController {


	public ref class LogeoController {

	private:
		//List < Persona^ >^ listaPersonas;
		int Existe;
		String^ EstadoCV;
		String^ Estado;
		String^ EstadoUsuario;
		SqlConnection^ objConexion;
		//String^ usuarioAlumno;

	public:
		LogeoController();
		//void CargarPersonasDesdeArchivo();
		int VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2);
		//String^ VerificarValidacionCV(String^ DniProfesor);
		//String^ obtenerUsuario();
		void AbrirConexion();
		void CerrarConexion();
		String^ VerificarValidacionCV(String^ DNI);
		String^ VerificarEstadoUsuario(String^ DNI); // Se verifica si está bloqueado o no
	};
}