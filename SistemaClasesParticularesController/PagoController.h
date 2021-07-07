#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class PagoController {
	private:
		List<Pago^>^ listaPagos;
		SqlConnection^ objConexion;
	public:
		PagoController();
		/*Métodos con base de datos*/
		void AbrirConexion();
		void CerrarConexion();
		Pago^ buscarPagoxCodigoBD(int CodigoClase);
		//Pago^ buscarPagoxCodigoPagoBD(String^ CodigoClase);

		/*Métodos con archivos .txt*/
		List<Pago^>^ buscarPagosxEstado(String^ estado);
		List<Pago^>^ buscarClasesxEstado(String^ estado);
		Inscripcion^ buscarIncscripcionxcodigo(String^ codigoBuscar);
		Alumno^ buscarAlumnoxDNI(String^ dniAlumno);
		Curso^ buscarCursoxNombreCurso(String^ curso);
		Inscripcion^ buscarIncscripcionxcodigopago(String^ codigoPago);
		Inscripcion^ buscarIncscripcionxcodigocompleta(String^ codigoPago);
		Inscripcion^ buscarIncscripcionxcodigopagocompleto(String^ codigoinscripcion);
		Profesor^ buscaProfesor(String^ usuarioProfesor);
		void aprobarPago(String^ codigopago);
		void desaprobarPago(String^ codigopago);


		void programarclase(String^ estadoclase);

		void CargarPagoDesdeArchivo();
		void crearNuevoPago(String^ codigoInscNuevo, String^ horaPagoNuevo, String^ fechaPagoNuevo, String^ codigoPagoNuevo);
		List<Pago^>^ buscarPagosxAlumno(String^ dniAlumnoBuscar);

		List<Pago^>^ buscarPagosxAlumno_BD(String^ dniAlumnoBuscar);
		Inscripcion^ buscarIncscripcionxcodigo_BD(int codigoBuscar);
		Alumno^ buscaAlumnoxDNI_BD(String^ dniAlumno);
	};

}