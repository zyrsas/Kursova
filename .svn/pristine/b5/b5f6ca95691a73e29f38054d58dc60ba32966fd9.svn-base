#include "Login.h"
#include <fstream>
using namespace std;

Login::Login(void)
{
	this->login = "Test";
	this->password = "Test";
	this->fileName = "login.pass";

	ifstream ifs (this->fileName);
	if (!ifs.is_open()) 
	{
		ofstream fout;
		fout.open(this->fileName);
		fout << "Test" << "\n";
		fout << "Test";
		fout.close();
	}
}

void Login::setInFile()
{
	string buff;
	ifstream fin(this->fileName); // (ÂÂÅËÈ ÍÅ ÊÎÐÐÅÊÒÍÎÅ ÈÌß ÔÀÉËÀ)
 
    if (!fin.is_open()) // åñëè ôàéë íå îòêðûò
	{
		this->login = "Test";
		this->password = "Test";
	}
	else
    {
		fin >> this->login;
		fin >> this->password;
		fin.close(); // çàêðûâàåì ôàéë
    }
}

void Login::saveInFile()
{
	ofstream fout;
	fout.open(this->fileName);
	fout << this->login << "\n";
	fout << this->password;
	fout.close();
}

bool Login::CheckLogin(string login, string password)
{
	if ( (!this->login.compare(login)) && (!this->password.compare(password)))
		return true;
	return false;
}