#pragma once


namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;
	using namespace System::Collections::Generic;

	public ref class Saldo {

	public:
		//int codigo; No entiendo a qu� se refiere
		String^ DniProfesor;
		String^ saldo;



	public:
		//Pago();
		Saldo(String^ DniProfesor, String^ saldo);

	};
}