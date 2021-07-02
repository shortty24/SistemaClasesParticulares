#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	public ref class ClaseController {
	private:
		List<Clase^>^ listaClases;
	public:
		ClaseController();
		List<Clase^>^ ClasesProgramadas(String^ dniProfesorBuscar);
		//List<Clase^>^ ClasesProgramadasOrdenada(List<String^>^ fechas, String^ dniProfesorBuscar);
		List<int>^ ObtenerDiaMesAnho(String^ fecha);
		Alumno^ buscarAlumnoxDNI(String^ dniAlumno);
		Profesor^ buscarProfesorxDNI(String^ dniProfesor);
		Curso^ buscarCursoxNombreCurso(String^ cursoBuscar);
		Inscripcion^ buscarInscripcionxHoraxFecha(String^ horaBuscar, String^ fechaBuscar);
		Pago^ buscarPagoxcodigoPago(String^ codigoinscripcionpago);
		Inscripcion^ buscarInscripcionxcodigo(String^ codigoinscripcion);
		void enviarlink(String^ linkclase,String^ codigoIns);
		List<Clase^>^ ClasesProgramadasxAlumno(String^ dniAlumnoBuscar);
		void crearclasetxt(String^ codigopago);
		List<Clase^>^ ClasesProgramadasxNombrexDia(String^ dniProfesorBuscar, String^ nombreBuscar, String^ fechaBuscar);
		
		void aprobarPago(String^ codigopago);
		void CargarClaseDesdeArchivo();
		List<Clase^>^ buscarPagosProfesorxEstado(String^ estado);

	};

}