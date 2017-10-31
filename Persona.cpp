#include "Persona.h"

using namespace std;

Persona::Persona(){

}

Persona::Persona(string nombre, string apellido, string direccion, string telefono, int edad){
	this->nombre = nombre;
	this->apellido = apellido;
	this->direccion = direccion;
	this->telefono = telefono;
	this->edad = edad;

}

string Persona::getNombre(){
	return nombre;
}

void Persona::setNombre(string nombre){
	this->nombre=nombre;
}

string Persona::getApellido(){
	return apellido;
}

void Persona::setApellido(string apellido){
	this->apellido=apellido;
}

string Persona::getDireccion(){
	return direccion;
}

void Persona::setDireccion(string direccion){
	this->direccion=direccion;
}

string Persona::getTelefono(){
	return telefono;
}

void Persona::setTelefono(string telefono){
	this->telefono=telefono;
}

int Persona::getEdad(){
	return edad;
}

void Persona::setEdad(int edad){
	this->edad=edad;
}

