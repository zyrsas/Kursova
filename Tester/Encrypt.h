#pragma once
#include <string>
using namespace std;

class Encrypt
{
private:
	string fileName;
public:
	Encrypt(void);
	Encrypt(string fileName);
	void setFileName(string fileName) {this->fileName = fileName;};
	string getGileName() {return this->fileName;};

	string encrypt();
	string decrypt();
};

