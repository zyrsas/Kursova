#include "Login.h"
#include <fstream>
#include "Encrypt.h"
#include <string>
#include <windows.system.h>
using namespace std;

Login::Login(void)
{
	this->login = "Test";
	this->password = "Test";
	this->fileName = "login.pass";
}


System::String^ stringToString(string str)
{
	System::String^ str2 = gcnew System::String(str.c_str());
	return str2;
}

void Login::setInFile()
{
	ifstream ifs (this->fileName);
	if (!ifs.is_open()) 
	{
		ofstream fout;
		fout.open(this->fileName);
		fout << "Test\n";
		fout << "Test"; 
		fout.close();
		Encrypt encrypt(this->fileName);
		string tmp = encrypt.encrypt();
	}
	else
    {
		Encrypt encrypt(this->fileName);
		encrypt.decrypt();
		getline(ifs, this->login);
		 
		getline(ifs, this->password);
		ifs.close(); // ��������� ����

		encrypt.encrypt();
	}
}

void Login::saveInFile()
{	
	fstream clear_file(this->fileName, ios::out);
	clear_file.close();
	ofstream fout;
	fout.open(this->fileName);
	fout << this->login << "\n";
	fout << this->password;
	fout.close();
	Encrypt encrypt(this->fileName);
	encrypt.encrypt();
}

bool Login::CheckLogin(string login, string password)
{
	if ( (!this->login.compare(login)) && (!this->password.compare(password)))
		return true;
	return false;
}