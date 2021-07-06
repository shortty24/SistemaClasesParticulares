#include "PagoController.h"
#include "InscripcionController.h"
#include "AlumnoController.h"


using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

PagoController::PagoController() {
	this->listaPagos = gcnew List<Pago^>();
	this->objConexion = gcnew SqlConnection();
}

/*Métodos con base de datos*/
void PagoController::AbrirConexion() {
	/*La cadena conexion está compuesto de: Servidor BD, nombre de BD, usuario de BD y contraseña de BD*/
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20165855;User ID=a20165855;Password=h7b3EJcM;";
	this->objConexion->Open(); /*Ya establecí la conexión con la BD*/
}

void PagoController::CerrarConexion() {
	this->objConexion->Close();
}


/*Métdos con archivos .txt*/
List<Pago^>^ PagoController::buscarClasesxEstado(String^ estadoBuscar) {
	List<Pago^>^ listaPagosEncontrados = gcnew List<Pago^>();
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPagos in lineas) {
		array<String^>^ palabras = lineaPagos->Split(separadores->ToCharArray());
		String^ codigodeinscripcion = palabras[0];
		Inscripcion^ objinscripcion = buscarIncscripcionxcodigo(codigodeinscripcion);
		String^ estadopago = palabras[1];
		String^ horapago = palabras[2];
		String^ fechapago = palabras[3];
		String^ codigopago = palabras[4];
		String^ estadoclase = palabras[5];
		if (estadoclase->ToUpper() == estadoBuscar->ToUpper()) {
			Pago^ objPago = gcnew Pago(objinscripcion, estadopago, horapago, fechapago, codigopago, estadoclase);
			listaPagosEncontrados->Add(objPago);
		}
	}
	return listaPagosEncontrados;
}

List<Pago^>^ PagoController::buscarPagosxEstado(String^ estadoBuscar) {
	List<Pago^>^ listaPagosEncontrados = gcnew List<Pago^>();
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPagos in lineas) {
		array<String^>^ palabras = lineaPagos->Split(separadores->ToCharArray());
		String^ codigodeinscripcion = palabras[0];
		Inscripcion^ objinscripcion = buscarIncscripcionxcodigo(codigodeinscripcion);
		String^ estadopago = palabras[1];
		String^ horapago = palabras[2];
		String^ fechapago = palabras[3];
		String^ codigopago = palabras[4];
		String^ estadoclase = palabras[5];
		if (estadopago->ToUpper() == estadoBuscar->ToUpper()) {
			Pago^ objPago = gcnew Pago(objinscripcion, estadopago, horapago, fechapago, codigopago, estadoclase);
			listaPagosEncontrados->Add(objPago);
		}
	}
	return listaPagosEncontrados;
}

Inscripcion^ PagoController::buscarIncscripcionxcodigo(String^ codigoBuscar) {
	Inscripcion^ objInscripcionEncontrada;
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");
	String^ separadores = ";";
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		String^ curso = palabras[2];
		String^ horainscripcion = palabras[3];
		String^ fechainscripcion = palabras[4];
		int duraciondeclase = Convert::ToInt32(palabras[5]);
		String^ horadeclase = palabras[6];
		String^ fechaclase = palabras[7];
		String^ codigodeinscripcion = palabras[8];
		if (codigodeinscripcion->ToUpper() == codigoBuscar->ToUpper()) {
			objInscripcionEncontrada = gcnew Inscripcion(objAlumno, codigodeinscripcion, duraciondeclase, horadeclase);
			 
				break;
		}
	}
	return objInscripcionEncontrada;
}

Inscripcion^ PagoController::buscarIncscripcionxcodigo_BD(int codigoBuscar) {
	Inscripcion^ objInscripcionEncontrada;
	AbrirConexion();
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	String^ codigoString = Convert::ToString(codigoBuscar);
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from InscripcionesProyecto where CodigoInscripcion ='" + codigoString + "';";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	if (objData1->Read()) {
		String^ dniAlumno = safe_cast<String^>(objData1["DNIAlumno"]);
		String^ dniProfesor = safe_cast<String^>(objData1["DNIProfesor"]);
		String^ nombreCurso = safe_cast<String^>(objData1["Curso"]);
		int horasPedidas = safe_cast<int>(objData1["HorasPedidas"]);
		//String^ horaInicio = safe_cast<String^>(objData1["HoraClase"]);
		DateTime horaInicio = safe_cast<DateTime>(objData1["HoraClase"]);
		String^ horaInicioString = Convert::ToString(horaInicio.ToShortTimeString());
		//String^ fechaClase = safe_cast<String^>(objData1["FechaClase"]);
		int codigoIns = safe_cast<int>(objData1["CodigoInscripcion"]);
		String^ codigoString = Convert::ToString(codigoIns);
		
		AlumnoController^ gestorAlumno = gcnew AlumnoController();
		Alumno^ objAlumno = gestorAlumno->buscaAlumnoxDNI_BD(dniAlumno);
		
		objInscripcionEncontrada = gcnew Inscripcion(objAlumno, codigoString, horasPedidas, horaInicioString);
	}
	objData1->Close();
	CerrarConexion();
	return objInscripcionEncontrada;
}

Alumno^ PagoController::buscarAlumnoxDNI(String^ dniAlumno) {
	Alumno^ objAlumnoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ perfil = palabras[0];
		String^ dniPersona = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (perfil == "A") {
			if (dniPersona == dniAlumno) {
				objAlumnoEncontrado = gcnew Alumno(dniPersona, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
				break;
			}
		}
	}
	return objAlumnoEncontrado;
}
Alumno^ PagoController::buscaAlumnoxDNI_BD(String^ dniAlumno) {
	AbrirConexion();
	Alumno^ objAlumnoEncontrado;
	SqlCommand^ objQuery = gcnew SqlCommand();
	objQuery->Connection = this->objConexion;
	objQuery->CommandText = "select * from Personas where DNI='" + dniAlumno + "';";
	SqlDataReader^ objData = objQuery->ExecuteReader();
	if (objData->Read()) {
		String^ dni = safe_cast<String^>(objData["DNI"]);
		String^ usuario = safe_cast<String^>(objData["Usuario"]);
		String^ contrasenha = safe_cast<String^>(objData["Contrasenha"]);
		String^ apellidoPaterno = safe_cast<String^>(objData["ApellidoPaterno"]);
		String^ apellidoMaterno = safe_cast<String^>(objData["ApellidoMaterno"]);
		String^ nombre = safe_cast<String^>(objData["Nombre"]);
		objAlumnoEncontrado = gcnew Alumno(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
	}
	objData->Close();
	CerrarConexion();
	return objAlumnoEncontrado;
}
void PagoController::CargarPagoDesdeArchivo() {
	this->listaPagos->Clear();
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");

	String^ separadores = ";";
	for each (String ^ lineaPagos in lineas) {
		array<String^>^ palabras = lineaPagos->Split(separadores->ToCharArray());
		String^ codigodeinscripcion = palabras[0];
		Inscripcion^ objinscripcion = buscarIncscripcionxcodigo(codigodeinscripcion);
		String^ estadopago = palabras[1];
		String^ horapago = palabras[2];
		String^ fechapago = palabras[3];
		String^ codigopago = palabras[4];
		String^ estadoclase = palabras[5];
		Pago^ objPago = gcnew Pago(objinscripcion, estadopago, horapago, fechapago, codigopago, estadoclase);
		this->listaPagos->Add(objPago);
	}
}

void PagoController::aprobarPago(String^ codigopago) {
	this->listaPagos->Clear();
	CargarPagoDesdeArchivo();
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		if (objPago->codigoPago == codigopago) {
			this->listaPagos[i]->estadopago = "validado";
			break;
		}
	}

	array<String^>^ lineasArchivoPago = gcnew array<String^>(this->listaPagos->Count);
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		lineasArchivoPago[i] = objPago->objInscripcion->codigoIns + ";" + objPago->estadopago + ";" + objPago->horaPago + ";" + objPago->fechaPago + ";" + objPago->codigoPago + ";" + objPago->estadoclase;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Pagos.txt", lineasArchivoPago);

}

void PagoController::desaprobarPago(String^ codigopago) {
	this->listaPagos->Clear();
	CargarPagoDesdeArchivo();
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		if (objPago->codigoPago == codigopago) {
			this->listaPagos[i]->estadopago = "no validado";
			break;
		}
	}

	array<String^>^ lineasArchivoPago = gcnew array<String^>(this->listaPagos->Count);
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		lineasArchivoPago[i] = objPago->objInscripcion->codigoIns + ";" + objPago->estadopago + ";" + objPago->horaPago + ";" + objPago->fechaPago + ";" + objPago->codigoPago + ";" + objPago->estadoclase;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Pagos.txt", lineasArchivoPago);

}

void PagoController::programarclase(String^ codigopago) {
	this->listaPagos->Clear();
	CargarPagoDesdeArchivo();
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		if (objPago->codigoPago == codigopago) {
			this->listaPagos[i]->estadoclase = "programada";
			break;
		}
	}

	array<String^>^ lineasArchivoPago = gcnew array<String^>(this->listaPagos->Count);
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		lineasArchivoPago[i] = objPago->objInscripcion->codigoIns + ";" + objPago->estadopago + ";" + objPago->horaPago + ";" + objPago->fechaPago + ";" + objPago->codigoPago + ";" + objPago->estadoclase;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	File::WriteAllLines("Pagos.txt", lineasArchivoPago);

}
void PagoController::crearNuevoPago(String^ codigoInscNuevo, String^ horaPagoNuevo, String^ fechaPagoNuevo, String^ codigoPagoNuevo) {
	CargarPagoDesdeArchivo();

	array<String^>^ lineasArchivoPago = gcnew array<String^>((this->listaPagos->Count) + 1);
	for (int i = 0; i < this->listaPagos->Count; i++) {
		Pago^ objPago = this->listaPagos[i];
		lineasArchivoPago[i] = objPago->objInscripcion->codigoIns + ";" + objPago->estadopago + ";" + objPago->horaPago + ";" + objPago->fechaPago + ";" + objPago->codigoPago + ";" + objPago->estadoclase;
	}
	/*Aquí ya mi array de lineasArchivoPartido esta OK, con la información a grabar*/
	lineasArchivoPago[this->listaPagos->Count] = codigoInscNuevo + ";" + "por procesar" + ";" + horaPagoNuevo + ";" + fechaPagoNuevo + ";" + codigoPagoNuevo + ";" + "pendiente";
	File::WriteAllLines("Pagos.txt", lineasArchivoPago);
}

List<Pago^>^ PagoController::buscarPagosxAlumno(String^ dniAlumnoBuscar) {
	List<Pago^>^ listaPagosEncontrados = gcnew List<Pago^>();
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPagos in lineas) {
		array<String^>^ palabras = lineaPagos->Split(separadores->ToCharArray());
		String^ codigodeinscripcion = palabras[0];
		Inscripcion^ objinscripcion = buscarIncscripcionxcodigo(codigodeinscripcion);
		String^ estadopago = palabras[1];
		String^ horapago = palabras[2];
		String^ fechapago = palabras[3];
		String^ codigopago = palabras[4];
		String^ estadoclase = palabras[5];
		if (objinscripcion->objAlumno->dni->ToUpper() == dniAlumnoBuscar->ToUpper()) {
			Pago^ objPago = gcnew Pago(objinscripcion, estadopago, horapago, fechapago, codigopago, estadoclase);
			listaPagosEncontrados->Add(objPago);
		}
	}
	return listaPagosEncontrados;
}

List<Pago^>^ PagoController::buscarPagosxAlumno_BD(String^ dniAlumnoBuscar) {
	List<Pago^>^ listaPagosEncontrados = gcnew List<Pago^>();
	AbrirConexion();
	SqlCommand^ objQuery1 = gcnew SqlCommand();
	objQuery1->Connection = this->objConexion;
	objQuery1->CommandText = "select * from PagosProyecto";
	SqlDataReader^ objData1 = objQuery1->ExecuteReader();
	while (objData1->Read()) {
		int codigoInscripcion = safe_cast<int>(objData1["CodigoInscripcion"]);
		String^ estadopago = safe_cast<String^>(objData1["EstadoPagoClase"]);
		String^ horapago = Convert::ToString(safe_cast<TimeSpan>(objData1["HoraPago"]));
		//DateTime horapago = safe_cast<DateTime>(objData1["HoraPago"]);
		//String^ horapagoString = Convert::ToString(horapago.ToShortTimeString());
		//String^ fechapago = safe_cast<String^>(objData1["FechaPago"]);
		DateTime fechapago = safe_cast<DateTime>(objData1["FechaPago"]);
		String^ fechapagoString = Convert::ToString(fechapago.ToShortDateString());

		String^ codigopago = safe_cast<String^>(objData1["CodigoPago"]);
		String^ estadoclase = safe_cast<String^>(objData1["EstadoLink"]);
		
		InscripcionController^ gestorInscripcion = gcnew InscripcionController();
		Inscripcion^ objinscripcion = gestorInscripcion->buscarInscripcionxcodigo_BD(codigoInscripcion);

		Pago^ objPago = gcnew Pago(objinscripcion, estadopago, horapago, fechapagoString, codigopago, estadoclase);
		if (objinscripcion->objAlumno->dni == dniAlumnoBuscar) {
			listaPagosEncontrados->Add(objPago);
		}
	}
	objData1->Close();
	CerrarConexion();
	return listaPagosEncontrados;
}

Inscripcion^ PagoController::buscarIncscripcionxcodigopago(String^ codigoPago) {
	Inscripcion^ objInscripcionEncontrada;
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPagos in lineas) {
		array<String^>^ palabras = lineaPagos->Split(separadores->ToCharArray());
		String^ codigodeinscripcion = palabras[0];
		Inscripcion^ objinscripcion = buscarIncscripcionxcodigo(codigodeinscripcion);
		String^ estadopago = palabras[1];
		String^ horapago = palabras[2];
		String^ fechapago = palabras[3];
		String^ codigopago = palabras[4];
		String^ estadoclase = palabras[5];
		if (codigopago->ToUpper() == codigoPago->ToUpper()) {
			objInscripcionEncontrada = objinscripcion;
			break;

		}
	}
	return objInscripcionEncontrada;
}


Inscripcion^ PagoController::buscarIncscripcionxcodigocompleta(String^ codigoBuscar) {
	Inscripcion^ objInscripcionEncontrada;
	Pago^ objPago;
	array<String^>^ lineas = File::ReadAllLines("Pagos.txt");
	String^ separadores = ";";
	for each (String ^ lineaPagos in lineas) {
		array<String^>^ palabras = lineaPagos->Split(separadores->ToCharArray());
		String^ codigodeinscripcion = palabras[0];
		Inscripcion^ objinscripcion = buscarIncscripcionxcodigopagocompleto(codigodeinscripcion);
		String^ estadopago = palabras[1];
		String^ horapago = palabras[2];
		String^ fechapago = palabras[3];
		String^ codigopago = palabras[4];
		String^ estadoclase = palabras[5];
		if (codigopago->ToUpper() == codigoBuscar->ToUpper()) {
			objPago = gcnew Pago(objinscripcion, estadopago, horapago, fechapago, codigopago, estadoclase);
			objInscripcionEncontrada = objPago->objInscripcion;
			break;

		}
	}
	
	return objInscripcionEncontrada;
}


Inscripcion^ PagoController::buscarIncscripcionxcodigopagocompleto(String^ codigoinscripcion) {
	Inscripcion^ objInscripcionEncontrada;
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");
	String^ separadores = ";";
	for each (String ^ lineaInscripcion in lineas) {
		array<String^>^ palabras = lineaInscripcion->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		Alumno^ objAlumno = buscarAlumnoxDNI(dniAlumno);
		String^ dniProfesor = palabras[1];
		String^ curso = palabras[2];
		Curso^ objCurso = buscarCursoxNombreCurso(curso);
		String^ horainscripcion = palabras[3];
		String^ fechainscripcion = palabras[4];
		int duraciondeclase = Convert::ToInt32(palabras[5]);
		String^ horadeclase = palabras[6];
		String^ fechaclase = palabras[7];
		String^ codigodeinscripcion = palabras[8];
		if (codigodeinscripcion->ToUpper() == codigoinscripcion->ToUpper()) {
			objInscripcionEncontrada = gcnew Inscripcion(objAlumno, objCurso, horainscripcion, fechainscripcion, duraciondeclase, horadeclase, fechaclase, codigodeinscripcion);

			break;
		}
	}
	return objInscripcionEncontrada;
}

Curso^ PagoController::buscarCursoxNombreCurso(String^ cursoBuscar) {
	Curso^ objCursoEncontrado;
	array<String^>^ lineas = File::ReadAllLines("CursosDisponibles.txt");

	String^ separadores = ";";
	for each (String ^ lineaPersonas in lineas) {
		array<String^>^ palabras = lineaPersonas->Split(separadores->ToCharArray());
		String^ curso = palabras[0];
		String^ tarifa = palabras[1];
		String^ dificultad = palabras[2];
		String^ usuario = palabras[3];
		Profesor^ objProfesor = buscaProfesor(usuario);

		if (cursoBuscar == curso) {
			objCursoEncontrado = gcnew Curso(curso, dificultad, objProfesor, tarifa);

			break;
		}
	}
	return objCursoEncontrado;
}

Profesor^ PagoController::buscaProfesor(String^ usuarioProfesor) {
	Profesor^ objProfesorEncontrado;
	array<String^>^ lineas = File::ReadAllLines("Personas.txt");
	String^ separadores = ";";
	for each (String ^ lineaProfesor in lineas) {
		array<String^>^ palabras = lineaProfesor->Split(separadores->ToCharArray());
		String^ dni = palabras[1];
		String^ usuario = palabras[2];
		String^ contrasenha = palabras[3];
		String^ apellidoPaterno = palabras[4];
		String^ apellidoMaterno = palabras[5];
		String^ nombre = palabras[6];

		if (usuario == usuarioProfesor) {
			objProfesorEncontrado = gcnew Profesor(dni, usuario, contrasenha, apellidoPaterno, apellidoMaterno, nombre);
			break;
		}
	}
	return objProfesorEncontrado;
}

