#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class PagoController {
	private:
		List<Pago^>^ listaPago;
	public:
		PagoController();
	};

}