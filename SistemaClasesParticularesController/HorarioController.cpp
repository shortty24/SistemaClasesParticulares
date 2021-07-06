#include "HorarioController.h"


using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

HorarioController::HorarioController() {
	this->listaHorarios = gcnew List<Horario^>();
	this->objConexion = gcnew SqlConnection();
}

/*Métodos con base de datos*/
void HorarioController::AbrirConexion() {
	/*La cadena conexion está compuesto de: Servidor BD, nombre de BD, usuario de BD y contraseña de BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); /*Ya establecí la conexión con la BD*/
}

void HorarioController::CerrarConexion() {
	this->objConexion->Close();
}

List<Horario^>^ HorarioController::CargarHorariosDesdeArchivoBD() {
	List<Horario^>^ listaHorarioProfesor = gcnew List<Horario^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from HorariosProyecto;";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIProfesor = safe_cast<String^>(objData[0]);
		String^ Dia = safe_cast<String^>(objData[1]);

		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 2; i < 26; i++) {
			horasxDia->Add(safe_cast<String^>(objData[i]));
		}
		Horario^ objHorario = gcnew Horario(DNIProfesor, Dia, horasxDia);

		listaHorarioProfesor->Add(objHorario);
	}
	objData->Close();
	CerrarConexion();

	return listaHorarioProfesor;
}

List<Horario^>^ HorarioController::HorarioxProfesorBD(String^ dniProfesorBuscar) {
	List<Horario^>^ listaHorarioProfesor = gcnew List<Horario^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from HorariosProyecto where DNIProfesor= " + dniProfesorBuscar + ";";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ DNIProfesor = safe_cast<String^>(objData[0]);
		String^ Dia = safe_cast<String^>(objData[1]);

		List<String^>^ horasxDia = gcnew List<String^>();
		for (int i = 2; i < 26; i++) {
			horasxDia->Add(safe_cast<String^>(objData[i]));
		}
		Horario^ objHorario= gcnew Horario(DNIProfesor, Dia, horasxDia);

		listaHorarioProfesor->Add(objHorario);
	}
	objData->Close();
	CerrarConexion();

	return listaHorarioProfesor;
}
void HorarioController::actualizarHorariosBD(array<String^>^ listaHorarios) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;

	String^ separadores = ";";

	for each (String ^ lineaHorario in listaHorarios) {
		array<String^>^ palabras = lineaHorario->Split(separadores->ToCharArray());
		String^ dni = palabras[0];
		String^ dia = palabras[1];

		objQuery->CommandText = "UPDATE HorariosProyecto SET DNIProfesor='" + dni + "',Dia='" + dia +
			"',ID0='" + palabras[2] + "',ID1='" + palabras[3] + "',ID2='" + palabras[4] + "',ID3='" + palabras[5] + "',ID4='" + palabras[6] +
			"',ID5='" + palabras[7] + "',ID6='" + palabras[8] + "',ID7='" + palabras[9] + "',ID8='" + palabras[10] + "',ID9='" + palabras[11] + "'," +
			"ID10 = '" + palabras[12] + "', ID11 = '" + palabras[13] + "', ID12 = '" + palabras[14] + "', ID13 = '" + palabras[15] + "', ID14 = '" + palabras[16] +
			"',ID15 = '" + palabras[17] + "', ID16 = '" + palabras[18] + "', ID17 = '" + palabras[19] + "', ID18 = '" + palabras[20] + "', ID19 = '" + palabras[21] + "'," +
			"ID20 = '" + palabras[22] + "', ID21 = '" + palabras[23] + "', ID22 = '" + palabras[24] + "', ID23 = '" + palabras[25] + "'"+" where DNIProfesor='"+ dni +"' and Dia='"+ dia +"';";

		objQuery->ExecuteNonQuery();
	}

	CerrarConexion();
}

void HorarioController::insertarHorariosBD(String^ lineaTexto){
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	//objQuery->CommandText = "insert	into Alumno values ('" +objAlumno->dni + "', '" + objAlumno->nombre + "', '" + objAlumno->apellidoPaterno + "', '" + objAlumno->apellidoMaterno;
	objQuery->CommandText = "insert	into HorariosProyecto values (@p1,@p2,@p3,@p4,@p5,@p6,@p7,@p8,@p9,@p10,@p11,@p12,@p13,@p14,@p15,@p16,@p17,@p18,@p19,@p20,@p21,@p22,@p23,@p24,@p25,@p26);";

	String^ separadores = ";";

	array<String^>^ palabras = lineaTexto->Split(separadores->ToCharArray());
	String^ dni = palabras[0];
	String^ dia = palabras[1];

	/*Esto de los parámetros es solo para el INSERT*/
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 8);
	p1->Value = dni;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 10);
	p2->Value = dia;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 2);
	p3->Value = palabras[2];
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 2);
	p4->Value = palabras[3];
	SqlParameter^ p5 = gcnew SqlParameter("@p5", System::Data::SqlDbType::VarChar, 2);
	p5->Value = palabras[4];
	SqlParameter^ p6 = gcnew SqlParameter("@p6", System::Data::SqlDbType::VarChar, 2);
	p6->Value = palabras[5];
	SqlParameter^ p7 = gcnew SqlParameter("@p7", System::Data::SqlDbType::VarChar, 2);
	p7->Value = palabras[6];
	SqlParameter^ p8 = gcnew SqlParameter("@p8", System::Data::SqlDbType::VarChar, 2);
	p8->Value = palabras[7];
	SqlParameter^ p9 = gcnew SqlParameter("@p9", System::Data::SqlDbType::VarChar, 2);
	p9->Value = palabras[8];
	SqlParameter^ p10 = gcnew SqlParameter("@p10", System::Data::SqlDbType::VarChar, 2);
	p10->Value = palabras[9];
	SqlParameter^ p11 = gcnew SqlParameter("@p11", System::Data::SqlDbType::VarChar, 2);
	p11->Value = palabras[10];
	SqlParameter^ p12 = gcnew SqlParameter("@p12", System::Data::SqlDbType::VarChar, 2);
	p12->Value = palabras[11];
	SqlParameter^ p13 = gcnew SqlParameter("@p13", System::Data::SqlDbType::VarChar, 2);
	p13->Value = palabras[12];
	SqlParameter^ p14 = gcnew SqlParameter("@p14", System::Data::SqlDbType::VarChar, 2);
	p14->Value = palabras[13];
	SqlParameter^ p15 = gcnew SqlParameter("@p15", System::Data::SqlDbType::VarChar, 2);
	p15->Value = palabras[14];
	SqlParameter^ p16 = gcnew SqlParameter("@p16", System::Data::SqlDbType::VarChar, 2);
	p16->Value = palabras[15];
	SqlParameter^ p17 = gcnew SqlParameter("@p17", System::Data::SqlDbType::VarChar, 2);
	p17->Value = palabras[16];
	SqlParameter^ p18 = gcnew SqlParameter("@p18", System::Data::SqlDbType::VarChar, 2);
	p18->Value = palabras[17];
	SqlParameter^ p19 = gcnew SqlParameter("@p19", System::Data::SqlDbType::VarChar, 2);
	p19->Value = palabras[18];
	SqlParameter^ p20 = gcnew SqlParameter("@p20", System::Data::SqlDbType::VarChar, 2);
	p20->Value = palabras[19];
	SqlParameter^ p21 = gcnew SqlParameter("@p21", System::Data::SqlDbType::VarChar, 2);
	p21->Value = palabras[20];
	SqlParameter^ p22 = gcnew SqlParameter("@p22", System::Data::SqlDbType::VarChar, 2);
	p22->Value = palabras[21];
	SqlParameter^ p23 = gcnew SqlParameter("@p23", System::Data::SqlDbType::VarChar, 2);
	p23->Value = palabras[22];
	SqlParameter^ p24 = gcnew SqlParameter("@p24", System::Data::SqlDbType::VarChar, 2);
	p24->Value = palabras[23];
	SqlParameter^ p25 = gcnew SqlParameter("@p25", System::Data::SqlDbType::VarChar, 2);
	p25->Value = palabras[24];
	SqlParameter^ p26 = gcnew SqlParameter("@p26", System::Data::SqlDbType::VarChar, 2);
	p26->Value = palabras[25];	

	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);
	objQuery->Parameters->Add(p5);
	objQuery->Parameters->Add(p6);
	objQuery->Parameters->Add(p7);
	objQuery->Parameters->Add(p8);
	objQuery->Parameters->Add(p9);
	objQuery->Parameters->Add(p10);
	objQuery->Parameters->Add(p11);
	objQuery->Parameters->Add(p12);
	objQuery->Parameters->Add(p13);
	objQuery->Parameters->Add(p14);
	objQuery->Parameters->Add(p15);
	objQuery->Parameters->Add(p16);
	objQuery->Parameters->Add(p17);
	objQuery->Parameters->Add(p18);
	objQuery->Parameters->Add(p19);
	objQuery->Parameters->Add(p20);
	objQuery->Parameters->Add(p21);
	objQuery->Parameters->Add(p22);
	objQuery->Parameters->Add(p23);
	objQuery->Parameters->Add(p24);
	objQuery->Parameters->Add(p25);
	objQuery->Parameters->Add(p26);

	/*UPDATE, DELETE, INSERT no devuelven datos y, por lo tanto, deben utilizar el método ExecuteNonQuery*/
	objQuery->ExecuteNonQuery();			
	CerrarConexion();
}



/*Métodos con archivos .txt*/
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
void HorarioController::editaHorarioxProfesor(String^ dniProfesorEditar, String^ diaEditar, String^ horaInicio, String^ horasPedidas) {
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
		if (dni == dniProfesorEditar && dia == diaEditar) {
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

List<Horario^>^ HorarioController::HorarioxProfesorInscripcion(String^ dniProfesor) {
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
		if (dni == dniProfesor) {
			HorarioProfesor->Add(objHorario);
		}
	}
	return HorarioProfesor;
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