#include "Persona.h"

using namespace SistemaClasesParticularesModel;

Persona::Persona(String^CodigoUsuario,String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre,String^ objCorreo) {
	this->CodigoUsuario = CodigoUsuario;
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
	this->objCorreo = objCorreo;
}