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
	       	string aux2;
	       	
 			for (int i = 0; i < bufferAux.size(); ++i){
 				
 				if(n[i]!= '|' && acum ==0){

 					aux2 += n[i];

 				} else{

 					p.setNombre(aux2);
 					acum++;
 				}

				if(n[i]!= '|' && acum ==1){

 					aux2 += n[i];

 				} else{

 					p.setApellido(aux2);
 					acum++;
 				}

 				if(n[i]!= '|' && acum ==2){

 					aux2 += n[i];

 				} else{

 					p.setDireccion(aux2);
 					acum++;
 				}

 				
 				if(n[i]!= '|' && acum ==3){

 					aux2 += n[i];

 				} else{

 					p.setTelefono(aux2);
 					acum++;
 				}

 				if(n[i]!= '|' && acum ==4){

 					aux2 += n[i];

 				} else{

 					int numTemporal = atoi(aux.c_str());
 					p.setEdad(numTemporal);
 					acum++;
 				}


 			}



         }

        
         for (int i = 0; i < personas.size(); ++i)
         {
         	cout<< personas[i].getNombre()<<personas[i].getApellido()<<endl;
         }

         cout<< "No sirve"<<endl;
        
        
        fin.close();

	
	
	
	

return 0;
}