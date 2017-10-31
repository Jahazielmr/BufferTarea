#include <vector>
#include "Persona.h"
#include <iostream>
#include <fstream>


using namespace std;

#ifndef BUFFERT_H
#define BUFFERT_H

class Buffert{ 

public:

	vector<Persona*> Read(ifstream & fin);
	int Write (Persona p);
	
 private:

	
};

#endif