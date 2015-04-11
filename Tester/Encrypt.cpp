#include "Encrypt.h"
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <stdio.h>
using namespace std;

Encrypt::Encrypt(void)
{
	key = "qwerty";
}

Encrypt::Encrypt(string fileName)
{
	this->key = "qwerty";
	this->fileName = fileName;
	this->bufferFileName = "tmpFile.tmp";
}

void Encrypt::encryptFile()
{
	char* key;
	const char* fileName = this->fileName.c_str();
	const char* bufferFileName = this->bufferFileName.c_str();
	key = (char *)alloca(this->key.size() + 1);
	memcpy(key, this->key.c_str(), this->key.size() + 1);

	FILE *input  = fopen(fileName, "rb");
	FILE *output = fopen(bufferFileName, "wb");

	unsigned char buffer[BUFSIZ];
	size_t count, i, j = 0;
	do {
		count = fread(buffer, sizeof *buffer, sizeof buffer, input);
		for ( i = 0; i < count; ++i )
		{
			buffer[i] ^= key[j++];
			if ( key[j] == '\0' )
				j = 0;
		}
		fwrite(buffer, sizeof *buffer, count, output);
	} while ( count == sizeof buffer );
    fclose(input);
    fclose(output);
	swapFile();
}

void Encrypt::swapFile()
{
		const char *A_name = this->fileName.c_str();
        const char *B_name = this->bufferFileName.c_str();
        const char *C_name = "tmp.pass";
        FILE *A, *B, *C;
        A = fopen(A_name, "rt");
        C = fopen(C_name, "w+t");
        char ch; 
        while((ch = getc(A)) != EOF)
                putc(ch, C);
        A = fopen(A_name,"wt");
        B = fopen(B_name,"rt");
        while((ch = getc(B)) != EOF)
                putc(ch, A);
        fclose(A);
        fseek(C, 0L, SEEK_SET);
        B=fopen(B_name, "wt");
        while ((ch = getc(C)) != EOF)
                putc(ch, B);
        fclose(B);
        fclose(C);
}
