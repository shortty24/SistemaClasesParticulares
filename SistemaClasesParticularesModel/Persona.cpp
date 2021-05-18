#include "Persona.h"

using namespace SistemaClasesParticularesModel;

Persona::Persona(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) {
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
}