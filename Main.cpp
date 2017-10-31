#include <vector>
#include "Persona.h"
#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <fstream>

using namespace std;


int main(){
	
		vector <Persona> personas;

	    
	    ifstream fin;
        
        fin.open("Jugadores.txt");
        
        if(fin.fail()){
            cout << "ERROR!! - archivo no encontrado";
            exit(1);
        }
        
        //leer linea
        char buffer[1000];
        
        string bufferAux;

        //Buffer b;
        string n;

         while(!fin.eof()) {
 			
 			Persona * persona;

 			getline(fin, n);
        	
 			bufferAux = n;
	       	int acum=0;
	       	string aux;
	       	Persona p;
 			for (int i = 0; i < n.size(); ++i){
 				
 				if (acum==0)
 					{
 						if (n[i]=='|')
 						{
 							p.setNombre(aux);
 							acum++;
 							aux="";
 						}else{
 							aux+=n[i];
 						}
 						

 					}

 				if (acum==1)
 					{
 						if (n[i]=='|')
 						{
 							p.setApellido(aux);
 							acum++;
 							aux="";
 						}else{
 							aux+=n[i];
 						}
 						

 					}	


 				if (acum==2)
 					{
 						if (n[i]=='|')
 						{
 							p.setDireccion(aux);
 							acum++;
 							aux="";
 						}else{
 							aux+=n[i];
 						}
 						

 					}	

 				if (acum==3)
 					{
 						if (n[i]=='|')
 						{
 							p.setTelefono(aux);
 							acum++;
 							aux="";
 						}else{
 							aux+=n[i];
 						}
 						

 					}	

 				if (acum==4)
 					{
 						if (n[i]=='|')
 						{
 							int numTemporal = atoi(aux.c_str());
 							p.setEdad(numTemporal);
 							acum=0;
 							aux="";
 							personas.push_back(p);
 						}else{
 							aux+=""+n[i];
 						}
 						

 					}	






 			}



         }

        
         for (int i = 0; i < personas.size(); ++i)
         {
         	cout<< personas[i].getNombre()<<endl;
         }


        
        
        fin.close();

	
	
	
	

return 0;
}