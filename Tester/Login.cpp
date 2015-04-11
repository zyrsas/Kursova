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

	ifstream ifs (this->fileName);
	if (!ifs.is_open()) 
	{
		ofstream fout;
		fout.open(this->fileName);
		fout << "Test" << "\n";
		fout << "Test";
		fout.close();
		Encrypt encrypt(this->fileName);
		encrypt.encryptFile();
	}		 
}


System::String^ stringToString(string str)
{
	System::String^ str2 = gcnew System::String(str.c_str());
	return str2;
}

void Login::setInFile()
{
	ifstream fin(this->fileName); // (����� �� ���������� ��� �����)
 
    if (!fin.is_open()) // ���� ���� �� ������
	{
		this->login = "Test";
		this->password = "Test";
	}
	else
    {
		Encrypt encrypt(this->fileName);
		encrypt.encryptFile();
		fin >> this->login;
		System::Windows::Forms::MessageBox::Show(stringToString(this->login));
		 
		fin >> this->password;
		System::Windows::Forms::MessageBox::Show(stringToString(this->password));
		fin.close(); // ��������� ����
		encrypt.encryptFile();
	}
}

void Login::saveInFile()
{
	ofstream fout;
	fout.open(this->fileName);
	fout << this->login << "\n";
	fout << this->password;
	fout.close();
	Encrypt encrypt(this->fileName);
	encrypt.encryptFile();
}

bool Login::CheckLogin(string login, string password)
{
	if ( (!this->login.compare(login)) && (!this->password.compare(password)))
		return true;
	return false;
}