#pragma once

//para reconocer el String
using namespace System;

public ref class CV {

	private:
		int codigo;
		String^	objCodigoMinedu;
		String^ objEmpresa;
		int telefonoEmpresa;

	public:
		//CV();
		CV(int codigo, String^ objCodigoMinedu, String^ objEmpresa, int telefonoEmpresa);

};

