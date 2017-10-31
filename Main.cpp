#include <vector>
#include "Persona.h"
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <fstream>

using namespace std;


int main(){
	cout<<"Ejercicio 1, cargamos un archivo de txt con el reader del buffer"<<endl;
	cout<<endl;
	
		ifstream fin;

		vector <Persona> personasAux;
	    

        
         for (int i = 0; i < personasAux.size(); ++i)
         {
         	cout<< "Nombre "<<personasAux[i].getNombre()<<" "<<"Apellido " <<personasAux[i].getApellido()<<" "<<"Direccion "<<personasAux[i].getDireccion()<<" Edad "<<personasAux[i].getEdad()<<" Telefono "<<personasAux[i].getTelefono()<<endl;
         }

        
        fin.close();

	cout<<endl;
	cout<<endl;

	cout<<"Ejercicio 2, escribir los datos de un vector a un archivo de texto usando el metodo writer del buffer";
	//Pone aqui abajo tu codigo alessandro !
	
	

return 0;
}