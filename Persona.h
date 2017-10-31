#include <vector>
#include <string>


using namespace std;


#ifndef PERSONA_H
#define PERSONA_H

class Persona
{ 

public:
	string nombre;
	string apellido;
	string direccion;
	string telefono;
	string edad;

public:
	Persona();
	Persona(string,string,string,string,string);

	string getNombre();
	void setNombre(string);

	string getApellido();
	void setApellido(string);

	string getDireccion();
	void setDireccion(string);

	string getTelefono();
	void setTelefono(string);

	string getEdad();
	void setEdad(string);
};

#endif
