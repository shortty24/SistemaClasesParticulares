#include "LogeoController.h"

using namespace System;
using namespace SistemaClasesParticularesController;
using namespace System::IO;


LogeoController::LogeoController() {

	//this->listaPersonas = gcnew List<Persona^>();
	this->Existe = Existe;
	this->Estado = Estado;
	this->Verificacion = Verificacion;
	//this->usuarioAlumno = usuarioAlumno;
}

int LogeoController::VerificarSiUsuarioExiste(String^ textBox1, String^ textBox2) {
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaPersona in lineas) {
		array<String^>^ palabras = lineaPersona->Split(separadores->ToCharArray());
		String^ ID = palabras[0];
		String^ dni = palabras[1];
		String^ Usuario = palabras[2];
		String^ Contrasenha = palabras[3];
		String^ ApellidoPaterno = palabras[4];
		String^ ApellidoMaterno = palabras[5];
		String^ Nombre = palabras[6];
		//Persona^ objPersona = gcnew Persona(dni, Usuario, Contrasenha, ApellidoPaterno, ApellidoMaterno, Nombre);
		//this->listaPersonas->Add(objPersona);
		if (textBox1 == Usuario && textBox2 == Contrasenha) {
			if (ID == "A") {
				if (VerificarEstadoUsuario(dni) == "No Bloqueado") {
					Existe = 1;
				}
				else {
					Existe = 6;
				}
			//usuarioAlumno = textBox1;
			}
			else if (ID == "P") {
				if (VerificarValidacionCV(dni) == "PorVerificar") {
					Existe = 4;
				}
				else if (VerificarValidacionCV(dni) == "Desaprobado") {
					Existe = 5;
				}
				else if (VerificarEstadoUsuario(dni) =="Bloqueado" ) {
					Existe = 6;
				}
				else if(VerificarValidacionCV(dni)=="Aprobado" && VerificarEstadoUsuario(dni)=="No Bloqueado") {
					Existe = 2;
				}
				


			}
			else if (ID == "M") {
				Existe = 3;
			}
			 break;
		}
		else {
			 Existe = 0;
			
		}
	}
	return Existe;
}

/*String^ LogeoController::obtenerUsuario() {
	return usuarioAlumno;
}*/


String^ LogeoController::VerificarValidacionCV(String^ DNI) {
	array<String^>^ lineas = File::ReadAllLines("CVs.txt");
	String^ separadores = ";";
	for each (String ^ lineaCV in lineas) {
		array<String^>^ palabras = lineaCV->Split(separadores->ToCharArray());
		//String^ ID = palabras[0];
		String^ dniProfesor = palabras[0];
		String^ CodigoMinedu = palabras[1];
		String^ Empresa = palabras[2];
		String^ TelefonoEmpresa = palabras[3];
		String^ Validacion = palabras[4];
		if (DNI== dniProfesor) {
			Verificacion = Validacion;
			break;
		}
	}
	return Verificacion;
}
String^ LogeoController::VerificarEstadoUsuario(String^ DNI) {
	array<String^>^ lineas = File::ReadAllLines("Quejas.txt");
	String^ separadores = ";";
	for each (String ^ lineaQueja in lineas) {
		array<String^>^ palabras = lineaQueja->Split(separadores->ToCharArray());
		String^ dniAgresor = palabras[0];
		String^ EstadoUsuario = palabras[3];
		if (DNI == dniAgresor) {
			Estado = EstadoUsuario;
			break;
		}
		else {
			Estado = "No Bloqueado";
		}
	}
	return Estado;
}