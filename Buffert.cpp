#include <string>
#include <sstream>
#include <fstream> 	
#include "Buffert.h"

using namespace std;

Buffert::Buffer (char Delim = '|', int maxBtytes = 1000){
	short len; // length of string to be packed
	if (size >= 0) len = size;
	else len = strlen (str);
	if (len > strlen(str)) return FALSE; // str is too short!
	int start = NextByte; // first character to be packed
	NextByte += len + 1;
	if (NextByte > MaxBytes) return FALSE;
	memcpy (&Buffer[start], str, len); //copy block of memory
	Buffer [start+len] = Delim; // add delimeter
	BufferSize = NextByte;
	return TRUE;

}

int Buffert::Unpack(char *str){
	int len = -1;	// length of packed string
	int start = NextByte; // first character to be unpacked
	for(int i = start; i < BufferSize; i++)
		if(Buffer[i] == Delim) {len = i-start; break;}
	if(len == -1) return FALSE;	// delimiter not found
	NextByte += len + 1;
	if(NextByte > BufferSize) return FALSE;
	strncpy (str, &Buffer[start], len);
	str[len] = 0;	// zero termination for string
	return TRUE;
}

int Buffert::Read(istream & stream){
	Clear();
	stream.read((char *)&BufferSize, sizeof(BufferSize));
	if (Stream.fail()) return FALSE;
	if (BufferSize > MaxBytes) return FALSE; // buffer overflow
	stream.read(Buffer, BufferSize);
	return stream.good();
}

int Buffert:: Write (Persona p) 
{
	stringstream ss;
	ofstream ofs;
	ofs.open("jugadores.txt");
	ofs<<p.getNombre()<<"|"<<p.getApellido<<"|"<<p.getDireccion<<"|"<<p.getTelefono<<"|"<<p.getEdad()<<"|\n";
	ofs.close();
	return 0;
}


int Buffert:: Init (char delim, int maxBytes)
 // construct with a maximum of maxFields
{
	Delim = delim;
	DelimStr[0] = Delim;
	DelimStr[1] = 0;
	if (maxBytes < 0) maxBytes = 0;
	MaxBytes = maxBytes;
	Buffer = new char[MaxBytes];
	BufferSize = 0;
	return 1;
}






















