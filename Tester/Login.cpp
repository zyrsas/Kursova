#include "Login.h"
#include <fstream>
#include "Encrypt.h"
#include <string>
#include <windows.system.h>
using namespace std;

Login::Login(void)
{
	//default value
	this->login = "Test";
	this->password = "Test";
	this->fileName = "login.pass";
}

void Login::setInFile()
{
	ifstream ifs (this->fileName);
	if (!ifs.is_open()) 
	{
		//file not open
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
		//file open
		Encrypt encrypt(this->fileName);
		//decrypt
		encrypt.decrypt();
		//get login and password
		getline(ifs, this->login);
		getline(ifs, this->password);
		ifs.close(); 
		//encrypt
		encrypt.encrypt();
	}
}

void Login::saveInFile()
{	
	fstream clear_file(this->fileName, ios::out);
	clear_file.close();
	ofstream fout;
	fout.open(this->fileName);
	//write login in file
	fout << this->login << "\n";
	//write password
	fout << this->password;
	fout.close();
	Encrypt encrypt(this->fileName);
	//encrypt login and password
	encrypt.encrypt();
}

bool Login::CheckLogin(string login, string password)
{
	//checking 
	if ( (!this->login.compare(login)) && (!this->password.compare(password)))
		return true;
	return false;
}