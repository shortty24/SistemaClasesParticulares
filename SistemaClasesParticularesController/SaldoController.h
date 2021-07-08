#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class SaldoController {
	public:
		List<Saldo^>^ listaSaldo;
		SqlConnection^ objConexion;


	public:
		SaldoController();
		void AbrirConexion();
		void CerrarConexion();
		String^ obtenerSaldoBD(String^ DNIProfesor);
		int ObtenerSaldoxDni(String^ dniprofesor);

		void pagarprofesor(int saldoaumentado, String^ dniprofesor);
		List<Saldo^>^ obtenerListaSaldos();
		void crearsaldo(String^ dniseleccionado);

		void CargarSaldoDesdeArchivo();
	};

}
