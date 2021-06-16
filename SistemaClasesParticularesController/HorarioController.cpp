#include "HorarioController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

HorarioController::HorarioController() {
}

List<Horario^>^ HorarioController::HorarioxProfesorxCurso(String^ dniProfesor, String^ nombreDelCurso) {
	List<Horario^>^ HorarioProfesor = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");
	/*List<String^>^ horasPosibles;
	for (int i = 0; i < 23; i++) {
		String^ horaTexto;
		horaTexto = Convert::ToString(i);
		horasPosibles->Add(horaTexto);
	}*/
	String^ separadores = ";";
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			for (int j = 0; j < 24; j++) {
				String^ convertido = Convert::ToString(j);
				if (palabras[i] == convertido) {
					horasxDia->Add(palabras[i]);
					//break;
				}
			}
		}
		Horario^ objHorario = gcnew Horario(dni, dia, horasxDia);
		if (dni == dniProfesor && nombreCurso == nombreDelCurso) {
			HorarioProfesor->Add(objHorario);
		}
	}
	return HorarioProfesor;
}

List<Horario^>^ HorarioController::HorarioxProfesor(String^ dniProfesorBuscar) {
	List<Horario^>^ HorarioProfesor = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			for (int j = 0; j < 24; j++) {
				String^ convertido = Convert::ToString(j);
				if (palabras[i] == convertido) {
					horasxDia->Add(palabras[i]);
				}
			}
		}
		Horario^ objHorario = gcnew Horario(dni, dia, horasxDia);
		if (dni == dniProfesorBuscar) {
			HorarioProfesor->Add(objHorario);
		}
	}
	return HorarioProfesor;
}