#include "Profesor.h"

using namespace SistemaClasesParticularesModel;

Profesor::Profesor(int calificacion, int horario, int precio, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) :Persona(CodigoUsuario,dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre, objCorreo) {
	this->calificacion = calificacion;
	this->horario = horario;
	this->precio = precio;
	
}

Profesor::Profesor(String^ CodigoUsuario, String^ objUsuario, String^ dni, String^ objNombre, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objCorreo, String^ objContrasenha) :Persona(CodigoUsuario, dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre,objCorreo) {
	this->CodigoUsuario = CodigoUsuario;
	this->objUsuario = objUsuario;
	this->dni = dni;
	this->objNombre = objNombre;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objCorreo = objCorreo;
	this->objContrasenha = objContrasenha;
	//this->objCV = objCV;

}