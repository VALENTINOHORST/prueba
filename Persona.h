#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <fstream>
using namespace std;

class Persona {
private:
	string nombre;
	string nacionalidad;
	string fechaNacimiento;
	string tipoVisita;
	string duracionEstancia;
	string estadoCivil;
	string paisResidencia;
	string propositoViaje;
	string solaOAcompaniada;
	string elementos;
	string ocupacion;
	string pisesAnteriores;
public:
	Persona();              // Constructor
	void mostrarInfo();  // Método público
};

#endif
