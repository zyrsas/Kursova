#include "Encrypt.h"
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <fstream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

Encrypt::Encrypt(void)
{

}

Encrypt::Encrypt(string fileName)
{
	this->fileName = fileName;
}


string Encrypt::encrypt()
{
	string msg;
    ifstream inf;
	ofstream outf;
	
	inf.open ( this->fileName );
	//------------------------- 
	//getline all text
    getline (inf, msg, '\0');
	inf.close();
	
	for(int i = 0; i < msg.length(); ++i)
		++msg[i];
	
	outf.open (this->fileName);
    //write encrypted text
	outf << msg;
	outf.close();
    return msg;
}
	
string Encrypt::decrypt()
{ 
	string msg;
    ifstream inf;
	ofstream outf;
	inf.open ( this->fileName );
	//------------------------- 
    //getline all text
    getline (inf, msg, '\0');
	inf.close();

	for(int i = 0; i < msg.length(); ++i)
		--msg[i];
	
	outf.open (this->fileName);
    //write decrypted text in file
	outf << msg;
	outf.close();
	
    return msg;
}
