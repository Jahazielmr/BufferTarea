#include <vector>
#include "Persona.h"
#include "Buffert.h"
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
	cout<<"Ejercicio 1, cargamos un archivo de txt con el reader del buffer"<<endl;
	cout<<endl;
	
	Buffert buffer;

	ifstream fin;

	vector <Persona> personasAux;
	    
	personasAux= buffer.Read(fin);
        
         for (int i = 0; i < personasAux.size(); ++i)
         {
         	cout<< "Nombre "<<personasAux[i].getNombre()<<" "<<"Apellido " <<personasAux[i].getApellido()<<" "<<"Direccion "<<personasAux[i].getDireccion()<<" Edad "<<personasAux[i].getEdad()<<" Telefono "<<personasAux[i].getTelefono()<<endl;
         }

        
        fin.close();

	cout<<endl;
	cout<<endl;

	cout<<"Ejercicio 2, escribir los datos de un vector a un archivo de texto usando el metodo writer del buffer";
	//Pone aqui abajo tu codigo alessandro !
	Buffert buff;

	vector <Persona*> personas;

	Persona* p1= new Persona("Roberto","Garcia","Choluteca","23343434","34");
	Persona* p2= new Persona("Marcos","Rodriguez","Tegucigalpa","9938383","12");
	Persona* p3= new Persona("Carlos","Caceres","Pespire","8882828","84");

	personas->push_back(p1);
	personas->push_back(p2);
	personas->push_back(p3); 

	    
	for (int i = 0; i < personas.size(); ++i)
		{
    		buff.Write(personas[i]);
		}
	
	
return 0;
}