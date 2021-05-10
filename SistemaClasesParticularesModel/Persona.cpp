#include "Persona.h"

Persona::Persona(int dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre, String^ objCorreo) {
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
	this->objCorreo = objCorreo;

}