#include "PagoController.h"
#include "InscripcionController.h"

using namespace SistemaClasesParticularesController;
using namespace System;
using namespace System::IO;

PagoController::PagoController() {
	this->listaPagos = gcnew List<Pago^>();
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
			Pago^ objPago = gcnew Pago(codigodeinscripcion, estadopago, horapago, fechapago, codigopago, estadoclase);
			listaPagosEncontrados->Add(objPago);
		}
	}
	return listaPagosEncontrados;
}

List<Inscripcion^>^ InscripcionController::buscarIncscripcionxcodigo(String^ codigoBuscar) {
	List<Inscripcion^>^ listaInscripcionesEncontradas = gcnew List<Inscripcion^>();
	array<String^>^ lineas = File::ReadAllLines("Inscripciones.txt");
	String^ separadores = ";";
	for each (String ^ lineaInscripciones in lineas) {
		array<String^>^ palabras = lineaInscripciones->Split(separadores->ToCharArray());
		String^ dniAlumno = palabras[0];
		String^ dniProfesor = palabras[1];
		String^ curso = palabras[2];
		String^ horainscripcion = palabras[3];
		String^ fechainscripcion = palabras[4];
		String^ duraciondeclase = palabras[5];
		String^ horadeclase = palabras[6];
		String^ fechaclase = palabras[7];
		String^ codigodeinscripcion = palabras[8];
		if (codigodeinscripcion->ToUpper() == codigoBuscar->ToUpper()) {
			Inscripcion^ objInscripcion = gcnew InscripcionparaPago(Alumno ^ objAlumno, String ^ fechaInscripcion, int tiempoReserva);
			listaInscripcionesEncontradas->Add(objInscripcion);
			
		}
	}
	return listaInscripcionesEncontradas;
}