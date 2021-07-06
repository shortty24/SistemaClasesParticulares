#include "CursoController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

CursoController::CursoController() {
	this->listaCursos = gcnew List<Curso^>();
	this->objConexion = gcnew SqlConnection();
}
 
/*Métodos con base de datos*/
void CursoController::AbrirConexion() {
	/*La cadena conexion está compuesto de: Servidor BD, nombre de BD, usuario de BD y contraseña de BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); /*Ya establecí la conexión con la BD*/
}

void CursoController::CerrarConexion() {
	this->objConexion->Close();
}

List<Curso^>^ CursoController::CursosxUsusarioProfesorBD(String^ usuarioProfesorBuscar) {
	List<Curso^>^ listaCursosxProfesor = gcnew List<Curso^>();
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from CursosDisponiblesProyecto where UsuarioProfesor='" + usuarioProfesorBuscar + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader(); /*Cuando es un select, se utiliza el ExecuteReader*/
	while (objData->Read()) {
		String^ NombreCurso = safe_cast<String^>(objData[0]);
		String^ PrecioCurso = safe_cast<String^>(objData[1]);
		String^ Dificultad = safe_cast<String^>(objData[2]);
		String^ UsuarioProfesor = safe_cast<String^>(objData[3]);

		Curso^ objCurso = gcnew Curso(NombreCurso, PrecioCurso, Dificultad, UsuarioProfesor);

		listaCursosxProfesor->Add(objCurso);
	}
	objData->Close();
	CerrarConexion();

	return listaCursosxProfesor;
}

void CursoController::AñadirCursoBD(Curso^ objCurso) {
	AbrirConexion();
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	//objQuery->CommandText = "insert	into Alumno values ('" +objAlumno->dni + "', '" + objAlumno->nombre + "', '" + objAlumno->apellidoPaterno + "', '" + objAlumno->apellidoMaterno;
	objQuery->CommandText = "insert	into CursosDisponiblesProyecto values (@p1,@p2,@p3,@p4);";

	/*Esto de los parámetros es solo para el INSERT*/
	SqlParameter^ p1 = gcnew SqlParameter("@p1", System::Data::SqlDbType::VarChar, 50);
	p1->Value = objCurso->nombreCurso;
	SqlParameter^ p2 = gcnew SqlParameter("@p2", System::Data::SqlDbType::VarChar, 10);
	p2->Value = objCurso->precioCurso;
	SqlParameter^ p3 = gcnew SqlParameter("@p3", System::Data::SqlDbType::VarChar, 6);
	p3->Value = objCurso->dificultad;
	SqlParameter^ p4 = gcnew SqlParameter("@p4", System::Data::SqlDbType::VarChar, 50);
	p4->Value = objCurso->usuarioProfesor;	

	objQuery->Parameters->Add(p1);
	objQuery->Parameters->Add(p2);
	objQuery->Parameters->Add(p3);
	objQuery->Parameters->Add(p4);

	/*UPDATE, DELETE, INSERT no devuelven datos y, por lo tanto, deben utilizar el método ExecuteNonQuery*/
	objQuery->ExecuteNonQuery();
	CerrarConexion();
}




/*Métodos con archivos .txt*/
void CursoController::CargarCursosDesdeArchivo() {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		this->listaCursos->Add(objCurso);
	}
}

List<Curso^>^ CursoController::CursosDisponibles() {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		this->listaCursos->Add(objCurso);
	}
	return this->listaCursos;
}
List<Curso^>^ CursoController::CursosDisponiblesxNombre(String^ nombreDelCurso) {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso,precio, dificultad, usuarioProfesor);
		if (nombreDelCurso == nombreCurso) {
			this->listaCursos->Add(objCurso);
		}
	}
	return this->listaCursos;
}
Curso^ CursoController::CursoDisponiblexNombrexProfesor(String^ nombreDelCurso, String^ usuarioProfe) {
	Curso^ cursoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		if (nombreDelCurso == nombreCurso && usuarioProfesor == usuarioProfe) {
			cursoEncontrado=objCurso;
			break;
		}
	}
	return cursoEncontrado;
}

Curso^ CursoController::CursoDisponiblexNombrexProfesor_BD(String^ nombreDelCurso, String^ usuarioProfe) {
	Curso^ cursoEncontrado;
	AbrirConexion();
	Inscripcion^ objetoEncontrado;
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from CursosDisponiblesProyecto where NombreCurso='" + nombreDelCurso + "'and UsuarioProfesor='"+ usuarioProfe + "';";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	if (objData1->Read()) {
		String^ nombreCurso = safe_cast<String^>(objData1["NombreCurso"]);
		String^ precio = safe_cast<String^>(objData1["PrecioCurso"]);
		String^ dificultad = safe_cast<String^>(objData1["Dificultad"]);
		String^ usuarioProfesor = safe_cast<String^>(objData1["UsuarioProfesor"]);
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		cursoEncontrado = objCurso;
	}
	objData1->Close();
	CerrarConexion();
	return cursoEncontrado;
}

List<Curso^>^ CursoController::CursosxUsusarioProfesor(String^ usuarioProfesorBuscar) {
	this->listaCursos->Clear();
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaCurso in lineas) {
		array<String^>^ palabras = lineaCurso->Split(separadores->ToCharArray());
		String^ nombreCurso = palabras[0];
		String^ precio = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuarioProfesor = palabras[3];
		Curso^ objCurso = gcnew Curso(nombreCurso, precio, dificultad, usuarioProfesor);
		if (usuarioProfesor == usuarioProfesorBuscar) {
			this->listaCursos->Add(objCurso);
		}
	}
	return this->listaCursos;
}

void CursoController::AñadirCurso(Curso^ objCurso) {
	this->listaCursos->Clear();
	CargarCursosDesdeArchivo();
	this->listaCursos->Add(objCurso);
	/*Primero vamos a guardar la información de los miembros de los partidos en sus respectivos archivos*/
	/*1ro. Voy a contar cuantos miembros en total entre todos los partidos*/
	array<String^>^ lineasArchivoCurso = gcnew array<String^>(this->listaCursos->Count);
	for (int i = 0; i < this->listaCursos->Count; i++) {
		Curso^ objCurso = this->listaCursos[i];
		//Profesor^ objProfesor = this->listaProfesores[n];
		lineasArchivoCurso[i] = objCurso->nombreCurso + ";" + objCurso->precioCurso + ";" + objCurso->dificultad+ ";" + objCurso->usuarioProfesor;
	}
	/*Aquí ya mi array de lineasArchivoCV esta OK, con la información a grabar*/
	File::WriteAllLines("CursosDisponibles.txt", lineasArchivoCurso);
}

