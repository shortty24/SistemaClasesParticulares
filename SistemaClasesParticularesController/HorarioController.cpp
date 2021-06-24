#include "HorarioController.h"


using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

HorarioController::HorarioController() {
	this->listaHorarios = gcnew List<Horario^>();
}

List<Horario^>^ HorarioController::CargarHorariosDesdeArchivo() {
	List<Horario^>^ listaHorarios = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			//for (int j = 0; j < 24; j++) {
				//String^ convertido = Convert::ToString(j);
				//if (palabras[i] == convertido) {
			horasxDia->Add(Convert::ToString(palabras[i]));
			//}
		//}
		}
		Horario^ objHorario = gcnew Horario(dni, dia, horasxDia, nombreCurso);
		listaHorarios->Add(objHorario);
	}
	return listaHorarios;
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
	List<Horario^>^ listaHorarioProfesor = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			//for (int j = 0; j < 24; j++) {
				//String^ convertido = Convert::ToString(j);
				//if (palabras[i] == convertido) {
					horasxDia->Add(Convert::ToString(palabras[i]));
				//}
			//}
		}
		Horario^ objHorario = gcnew Horario(dni, dia, horasxDia, nombreCurso);
		if (dni == dniProfesorBuscar) {
			listaHorarioProfesor->Add(objHorario);
		}
	}
	return listaHorarioProfesor;
}

Horario^ HorarioController::buscarHorarioxDia(String^ diaBuscar) {
	Horario^ objHorarioEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			//for (int j = 0; j < 24; j++) {
				//String^ convertido = Convert::ToString(j);
				//if (palabras[i] == convertido) {
					horasxDia->Add(palabras[i]);
				//}
			//}
		}
		if (dia == diaBuscar) {
			objHorarioEncontrado = gcnew Horario(dni, dia, horasxDia);
		}
	}
	return objHorarioEncontrado;
}
void HorarioController::editaHorarioxProfesor(String^ dniProfesorEditar, String^ nombreDelCursoEditar, String^ diaEditar, String^ horaInicio, String^ horasPedidas) {
	List<String^>^ listaTextoHorario = gcnew List<String^>();
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");
	String^ separadores = ";";
	int indice = Convert::ToInt32(horaInicio);
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			horasxDia->Add(palabras[i]);
		}
		int indice = Convert::ToInt32(horaInicio);
		if (dni == dniProfesorEditar && nombreCurso == nombreDelCursoEditar && dia == diaEditar) {
			if (horasPedidas == "1") {
				horasxDia[indice] = "-";
			}
			else if (horasPedidas == "2") {
				horasxDia[indice] = "-";
				horasxDia[indice+1] = "-";
			}
		}
		String^ lineaTexto;
		lineaTexto = dni + ";" + nombreCurso + ";" + dia;
		for (int j = 0; j < (horasxDia->Count); j++) {
			lineaTexto = lineaTexto + ";" + horasxDia[j];
		}

		listaTextoHorario->Add(lineaTexto);
	}
	File::WriteAllLines("Horarios.txt", listaTextoHorario);
}

/*void HorarioController::EditarHorarioDisponibilidad(String^ dniProfesor, List<String^>^ listaHorasDisponibilidad) {
	this->listaHorarios->Clear();

	List<String^>^ listaHorarioProfesor = gcnew List<String^>();
	//List<Horario^>^ listaHorarioProfesor = gcnew List<Horario^>();
	array<String^>^ lineas = File::ReadAllLines("Horarios.txt");

	String^ separadores = ";";
	for each (String ^ lineaHorario in lineas) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ nombreCurso = palabras[1];
		String^ dia = palabras[2];
		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 3; i < 27; i++) {
			horasxDia->Add(Convert::ToString(palabras[i]));
		}

		if (dni == dniProfesor) {
			//for (int i = 0; i < listaHorario->Count; i++) {
				Horario^ objHorario;
				if (this->groupBox15->Text == objHorario->dia) {
					for (int j = 0; j < objHorario->horasDisponibles->Count; j++) {
						if (objHorario->horasDisponibles[j] != "-") {
							this->checkedListBox1->SetItemChecked(j, true);
						}
					}
				}
				else if (this->groupBox13->Text == objHorario->dia) {
					for (int k = 0; k < objHorario->horasDisponibles->Count; k++) {
						if (objHorario->horasDisponibles[k] != "-") {
							this->checkedListBox2->SetItemChecked(k, true);
						}
					}
				}
				else if (this->groupBox11->Text == objHorario->dia) {
					for (int l = 0; l < objHorario->horasDisponibles->Count; l++) {
						if (objHorario->horasDisponibles[l] != "-") {
							this->checkedListBox3->SetItemChecked(l, true);
						}
					}
				}
				else if (this->groupBox14->Text == objHorario->dia) {
					for (int m = 0; m < objHorario->horasDisponibles->Count; m++) {
						if (objHorario->horasDisponibles[m] != "-") {
							this->checkedListBox6->SetItemChecked(m, true);
						}
					}
				}
				else if (this->groupBox12->Text == objHorario->dia) {
					for (int n = 0; n < objHorario->horasDisponibles->Count; n++) {
						if (objHorario->horasDisponibles[n] != "-") {
							this->checkedListBox5->SetItemChecked(n, true);
						}
					}
				}
				else if (this->groupBox10->Text == objHorario->dia) {
					for (int o = 0; o < objHorario->horasDisponibles->Count; o++) {
						if (objHorario->horasDisponibles[o] != "-") {
							this->checkedListBox4->SetItemChecked(o, true);
						}
					}
				}
				else if (this->groupBox9->Text == objHorario->dia) {
					for (int p = 0; p < objHorario->horasDisponibles->Count; p++) {
						if (objHorario->horasDisponibles[p] != "-") {
							this->checkedListBox7->SetItemChecked(p, true);
						}
					}
				}
				this->listaHorario = listaHorario;

			//}
		}

		String^ lineaTexto;
		lineaTexto = dni + ";" + nombreCurso + ";" + dia;
		for (int j = 0; j < (horasxDia->Count); j++) {
			lineaTexto = lineaTexto + ";" + horasxDia[j];
		}

		listaHorarioProfesor->Add(lineaTexto);
	}
	File::WriteAllLines("Horarios.txt", listaHorarioProfesor);
}*/