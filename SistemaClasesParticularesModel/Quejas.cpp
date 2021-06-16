#include "Quejas.h"

using namespace SistemaClasesParticularesModel;

Quejas::Quejas(String^ DniAgresor, String^ Queja, String^ DniAgreviado, String^ Estado){
	this->DniAgresor = DniAgresor;
	this->Queja = Queja;
	this->DniAgreviado = DniAgreviado;
	this->Estado = Estado;

}