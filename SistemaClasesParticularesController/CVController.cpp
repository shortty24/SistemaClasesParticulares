#include "CVController.h"
#include "ProfesorController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;

CVController::CVController() {

}

String^ CVController::obtenerEmpresaRef(String^ dniProfesor) {
	String^ nombreEmpresa;
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dniProfesorEnc = palabras[0];
		String^ empresa = palabras[2];
		//ProfesorController^ gestorProfesor = gcnew ProfesorController();
		//Profesor^ profesorEncontrado = gestorProfesor -> buscaProfesorxdni (dniProfesorEnc);
		if (dniProfesorEnc == dniProfesor) {
			nombreEmpresa=empresa;
			break;
		}
	}
	return nombreEmpresa;
}