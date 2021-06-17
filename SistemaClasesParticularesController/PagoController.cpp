#include "PagoController.h"


using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

PagoController::PagoController() {
	this->listaPagos = gcnew List<Pago^>();
}


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
	/*Aqu� ya mi array de lineasArchivoPartido esta OK, con la informaci�n a grabar*/
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
	/*Aqu� ya mi array de lineasArchivoPartido esta OK, con la informaci�n a grabar*/
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
	/*Aqu� ya mi array de lineasArchivoPartido esta OK, con la informaci�n a grabar*/
	File::WriteAllLines("Pagos.txt", lineasArchivoPago);

}