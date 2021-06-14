#pragma once
//#include "Profesor.h"

namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class CV {

	public:
		//int codigo;
		String^ objCodigoMinedu;
		String^ objEmpresa;
		String^ telefonoEmpresa;
		String^ DniProfesor;
		String^ Validación;
		//Profesor^ CV;

	public:
		//CV();
		CV(String^ DniProfesor, String^ objCodigoMinedu, String^ objEmpresa, String^ telefonoEmpresa, String^ Validación);

	};
}

