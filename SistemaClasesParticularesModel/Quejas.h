#pragma once

//#include "Profesor.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class Quejas {

	public:
		//int codigo;
		String^ DniAgresor;
		String^ Queja;
		String^ DniAgreviado;
		String^ Estado;
		//Profesor^ CV;

	public:
		//CV();
		Quejas(String^ DniAgresor, String^ Queja, String^ DniAgreviado, String^ Estado);

	};
}