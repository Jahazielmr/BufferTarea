#include <vector>
#include "Persona.h"
#include "Buffert.h"
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
		ifstream fin;

        
        /* for (int i = 0; i < personas.size(); ++i)
         {
         	cout<< "Nombre "<<personas[i].getNombre()<<" "<<"Apellido " <<personas[i].getApellido()<<" "<<"Direccion "<<personas[i].getDireccion()<<" Edad "<<personas[i].getEdad()<<" Telefono "<<personas[i].getTelefono()<<endl;
         }

		*/
        
        
        fin.close();
Buffert buff;
for (int i = 0; i < personas.size(); ++i)
{
    buff.Write(personas[i]);
}
	
	
	
	

return 0;
}