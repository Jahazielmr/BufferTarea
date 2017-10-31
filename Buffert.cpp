#include <string>
#include <sstream>
#include <fstream> 	
#include <iostream>
#include <vector>
#include "Persona.h"
#include "Buffert.h"

using namespace std;


vector<Persona> Buffert::Read(ifstream  fin){
		
		vector <Persona> personas;
	    
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

            int acum=0;
            

 			getline(fin, n);
        	
 			bufferAux = n;
	       	string aux;
	       	Persona p;
 			for (int i = 0; i < n.size(); ++i){
 				
 				if (acum==0)
 					{
 						if (n[i]=='|')
 						{
 							p.setNombre(aux);
 							aux="";
                            acum++;
                            
 						}else{
 							aux+=n[i];
 						}
 						

 					} else

 				if (acum==1)
 					{
 						if (n[i]=='|')
 						{
 							p.setApellido(aux);
 							aux="";
                            acum++;
                            
 						}else{
 							aux+=n[i];
 						}
 						

 					} else


 				if (acum==2)
 					{
 						if (n[i]=='|')
 						{
 							p.setDireccion(aux);
 							aux="";
                            acum++;
                            
 						}else{
 							aux+=n[i];
 						}
 						

 					} else

 				if (acum==3)
 					{
 						if (n[i]=='|')
 						{
 							p.setTelefono(aux);
 							aux="";
                            acum++;
                            
 						}else{
 							aux+=n[i];
 						}
 						

 					} else

 				if (acum==4)
 					{
 						if (n[i]=='|')
 						{
 							p.setEdad(aux);
 							aux="";
                            acum++;
                            
 							personas.push_back(p);
 						}else{
 							aux+=n[i];
 						}
 						

 					}else{

                    }	

 			}


         }

         return personas;


}

int Buffert:: Write (Persona p) 
{
	stringstream ss;
	ofstream ofs;
	ofs.open("jugadores.txt");
	ofs<<p.getNombre()<<"|"<<p.getApellido()<<"|"<<p.getDireccion()<<"|"<<p.getTelefono()<<"|"<<p.getEdad()<<"|\n";
	ofs.close();
	return 0;
}













