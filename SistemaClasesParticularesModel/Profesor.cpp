#include "Profesor.h"

using namespace SistemaClasesParticularesModel;

Profesor::Profesor(int calificacion, int horario, int precio, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) :Persona(dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre) {
	this->calificacion = calificacion;
	this->horario = horario;
	this->precio = precio;
	
}
Profesor::Profesor(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre, String^ numCelular) :Persona(dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre) {
	this->dni = dni;
	this->objUsuario = objUsuario;
	this->objContrasenha = objContrasenha;
	this->objApellidoPaterno = objApellidoPaterno;
	this->objApellidoMaterno = objApellidoMaterno;
	this->objNombre = objNombre;
	this->numCelular = numCelular;

}