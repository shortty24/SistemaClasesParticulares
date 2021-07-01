#pragma once
namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class SaldoController {
	private:
		List<Saldo^>^ listaSaldo;
	public:
		SaldoController();
		void pagarprofesor(int saldoaumentado, String^ dniprofesor);
		List<Saldo^>^ obtenerListaSaldos();
		void crearsaldo(String^ dniseleccionado);

		void CargarSaldoDesdeArchivo();
	};

}
