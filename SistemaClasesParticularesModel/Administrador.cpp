#include "Administrador.h"

using namespace SistemaClasesParticularesModel;

Administrador::Administrador(String^ dni, String^ objUsuario, String^ objContrasenha, String^ objApellidoPaterno, String^ objApellidoMaterno, String^ objNombre) : Persona(CodigoUsuario,dni, objUsuario,objContrasenha, objApellidoPaterno, objApellidoMaterno, objNombre,objCorreo){

}