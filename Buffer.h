#include <vector>
#include "Persona.h"

using namespace std;

#ifndef BUFFERT_H
#define BUFFERT_H

class Buffert{ 

public:

	Buffers (char Delim = '|', int maxBtytes = 1000);
	int Read(istream & file);
	int static Write (Persona p);
	int Pack(const char * str, int size = -1);
	int Unpack(char * str);
 private:

	char Delim;	// delimiter character
	char * Buffer; 	// character array to hold field values
	int BufferSize;	// current size of packed fields
	int MaxBytes;	// maximum # of characters in the buffer
	int NextByte;	// packing/unpacking position in buffer
};

#endif
