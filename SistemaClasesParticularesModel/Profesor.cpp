#include "Profesor.h"

using namespace SistemaClasesParticularesModel;

Profesor::Profesor(int calificacion, int horario, int precio, Curso^ objCurso, Administrador^ objAdministrador, String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) :Persona(dni, objUsuario, objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre) {
	this->calificacion = calificacion;
	this->horario = horario;
	this->precio = precio;
	this->objCurso = objCurso;
	
}