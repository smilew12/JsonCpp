#include <iostream>
#include "readStrJson.cpp"
#include "readFileJson.cpp"
#include "writeFileToJson.cpp"



int main(int argc, char *argv[]) 
{
    
	readStrJson();
	
	cout << "\n\n";
	readStrProJson();

    readFileJson();

    writeFileJson();
	
	return 0;
}