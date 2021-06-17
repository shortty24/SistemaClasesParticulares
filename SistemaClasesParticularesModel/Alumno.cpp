#include "Alumno.h"

using namespace SistemaClasesParticularesModel;

/*Alumno::Alumno(int horasPedidas, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) : Persona(dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre) {
	this->horasPedidas = horasPedidas;
}*/
Alumno::Alumno(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) : Persona(CodigoUsuario,dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre, objCorreo) {
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
}
Alumno::Alumno(String^ CodigoUsuario, String^ objUsuario, String^ dni, String^ objNombre, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objCorreo, String^ objContrasenha) : Persona(CodigoUsuario, dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre, objCorreo) {
	this->CodigoUsuario = CodigoUsuario;
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
	this->objCorreo = objCorreo;
}

