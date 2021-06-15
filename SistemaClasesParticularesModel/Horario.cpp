#include "Horario.h"

using namespace SistemaClasesParticularesModel;

Horario::Horario(String^ dniProfesor, String^ dia, List<String^>^ horasDisponibles){
	this -> dniProfesor = dniProfesor;
	this->dia = dia;
	this->horasDisponibles = gcnew List<String^> ();
}