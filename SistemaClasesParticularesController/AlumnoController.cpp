#include "AlumnoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

AlumnoController::AlumnoController(){
	this->listaAlumnos = gcnew List<Alumno^>();
}
Alumno^ AlumnoController::buscaAlumno(String^usuario) {

}