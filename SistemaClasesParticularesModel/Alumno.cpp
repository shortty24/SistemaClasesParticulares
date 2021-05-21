#include "Alumno.h"

using namespace SistemaClasesParticularesModel;

/*Alumno::Alumno(int horasPedidas, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) : Persona(dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre) {
	this->horasPedidas = horasPedidas;
}*/
Alumno::Alumno(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) : Persona(dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre) {
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
}