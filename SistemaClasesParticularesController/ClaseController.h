#pragma once

namespace SistemaClasesParticularesController {
	using namespace System::Collections::Generic;
	using namespace SistemaClasesParticularesModel;
	using namespace System;
	using namespace System::Data::SqlClient;

	public ref class ClaseController {
	private:
		List<Clase^>^ listaClases;
		SqlConnection^ objConexion;

	public:
		ClaseController();
		/*M�todos con base de datos*/
		void AbrirConexion();
		void CerrarConexion();
		List<Clase^>^ ClasesProgramadasxProfesorBD(String^ dniProfesorBuscar);
		List<Clase^>^ ClasesProgramadasxAlumno_BD(String^ dniAlumnoBuscar);
		Clase^ obtenerProximaClase(String^ DniProfesor);
		Clase^ obtenerClaseSeleccionadaBD(int codigo);
		void actualizarClaseBD(Clase^ ClaseSeleccionada);
		List<String^>^ obtenerListaCursosPedidos(String^ dniProfesorBuscar);
		void crearclaseBD(Clase^ objClase);
		void enviarlinkBD(String^ linkclase, int codigoIns);
		Clase^ BuscarClasexCodigoPagoBD(String^ CodigoInscripcion);///
		void ProgramarClaseBD(String^ CodigoInscripcion);
		List<Clase^>^ ClasesProgramadasxNombrexDiaBD(String^ dniProfesorBuscar, String^ nombreBuscar, String^ fechaBuscar);
		List<Clase^>^ ClasesProgramadasxDiaBD(String^ dniProfesorBuscar, String^ fecha);
		List<Clase^>^  ClasesProgramadasxNombreBD(String^ dniProfesorBuscar,String^ nombreAlumno);
		Clase^ obtenerProximaClaseAlumno_BD(String^ DniAlumno);
		
		/*M�todos con archivos .txt*/
		List<Clase^>^ ClasesProgramadas(String^ dniProfesorBuscar);
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