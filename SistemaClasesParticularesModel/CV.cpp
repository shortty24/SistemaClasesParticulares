#include "CV.h"

using namespace SistemaClasesParticularesModel;

CV::CV(String^ DniProfesor, String^ objCodigoMinedu, String^ objEmpresa, String^ telefonoEmpresa, String^ Validaci�n) {
	this->DniProfesor = DniProfesor;
	this->objCodigoMinedu= objCodigoMinedu;
	this->objEmpresa = objEmpresa;
	this->telefonoEmpresa = telefonoEmpresa;
	this->Validaci�n = Validaci�n;
}