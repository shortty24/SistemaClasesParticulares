#pragma once
namespace SistemaClasesParticularesModel {
	//para reconocer el String
	using namespace System;

	public ref class BonusAlumno {

	public:
		String^ DniAlumno;
		String^ Estado;

	public:
		//CV();
		BonusAlumno(String^ DniAlumno, String^ Estado);

	};
}

