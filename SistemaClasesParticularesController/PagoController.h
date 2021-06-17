#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class PagoController {
	private:
		List<Pago^>^ listaPagos;
	public:
		PagoController();

		List<Pago^>^ buscarPagosxEstado(String^ estado);
		Inscripcion^ buscarIncscripcionxcodigo(String^ codigoBuscar);
		Alumno^ buscarAlumnoxDNI(String^ dniAlumno);

	};

}