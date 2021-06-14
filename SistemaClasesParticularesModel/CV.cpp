#include "CV.h"

using namespace SistemaClasesParticularesModel;

CV::CV(String^ DniProfesor, String^ objCodigoMinedu, String^ objEmpresa, String^ telefonoEmpresa, String^ Validación) {
	this->DniProfesor = DniProfesor;
	this->objCodigoMinedu= objCodigoMinedu;
	this->objEmpresa = objEmpresa;
	this->telefonoEmpresa = telefonoEmpresa;
	this->Validación = Validación;
}