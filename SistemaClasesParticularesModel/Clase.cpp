#include "Clase.h"

using namespace SistemaClasesParticularesModel;

/*Clase::Clase(String^ objLink, Profesor^ objProfesor, Administrador^ objAdministrador, Curso^ objCurso, Pago^ objPago) {
	this->objLink = objLink;
	this->objProfesor = objProfesor;
	this->objAdministrador = objAdministrador;
	this->objCurso = objCurso;
	this->objPago = objPago;

}*/

/*Clase::Clase(Pago^ objPago, Profesor^ objProfesor, Curso^ objCurso, String^ objLink) {
	this->objPago = objPago;
	this->objProfesor = objProfesor;
	this->objCurso = objCurso;
	this->objLink = objLink;
}*/

Clase::Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink) {
	this->objAlumno = objAlumno;
	this->objProfesor = objProfesor;
	this->objCurso = objCurso;
	this->horaClase = horaClase;
	this->fechaClase = fechaClase;
	this->objLink = objLink;
}
Clase::Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink, Pago^ objPago, String^ estadopagoprofesor) {
	this->objAlumno = objAlumno;
	this->objProfesor = objProfesor;
	this->objCurso = objCurso;
	this->horaClase = horaClase;
	this->fechaClase = fechaClase;
	this->objLink = objLink;
	this->objPago = objPago;
	this->estadopagoprofesor = estadopagoprofesor;
}

Clase::Clase(Alumno^ objAlumno, Profesor^ objProfesor, Curso^ objCurso, String^ horaClase, String^ fechaClase, String^ objLink, Pago^ objPago, String^ EstadoLink, String^ estadopagoprofesor) {
	this->objAlumno = objAlumno;
	this->objProfesor = objProfesor;
	this->objCurso = objCurso;
	this->horaClase = horaClase;
	this->fechaClase = fechaClase;
	this->objLink = objLink;
	this->EstadoLink = EstadoLink;
	this->objPago = objPago;
	this->estadopagoprofesor = estadopagoprofesor;
}
Clase::Clase(String^ DniAlumno, String^ DniProfesor, String^ NombreCurso, String^ horaClase, String^ fechaClase, String^ objLink, int CodigoInscripcion, String^ EstadoLink, String^ estadopagoprofesor) {

	this->DniAlumno = DniAlumno;
	this->DniProfesor = DniProfesor;
	this->NombreCurso = NombreCurso;
	this->horaClase = horaClase;
	this->fechaClase = fechaClase;
	this->objLink = objLink;
	this->EstadoLink = EstadoLink;
	this->CodigoInscripcion = CodigoInscripcion;
	this->estadopagoprofesor = estadopagoprofesor;
}
