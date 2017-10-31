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
	int edad;

public:
	Persona();
	Persona(string,string,string,string,int);

	string getNombre();
	void setNombre(string);

	string getApellido();
	void setApellido(string);

	string getDireccion();
	void setDireccion(string);

	string getTelefono();
	void setTelefono(string);

	int getEdad();
	void setEdad(int);
};

#endif