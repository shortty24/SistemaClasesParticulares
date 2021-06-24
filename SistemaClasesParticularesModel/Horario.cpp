#include "Horario.h"

using namespace SistemaClasesParticularesModel;

Horario::Horario(String^ dniProfesor, String^ dia, List<String^>^ horasDisponibles){
	this-> dniProfesor = dniProfesor;
	this-> dia = dia;
	this-> horasDisponibles = horasDisponibles;
}

Horario::Horario(String^ dniProfesor, String^ dia, List<String^>^ horasDisponibles, String^ curso) {
	this->dniProfesor = dniProfesor;
	this->dia = dia;
	this->horasDisponibles = horasDisponibles;
	this->curso = curso;
}