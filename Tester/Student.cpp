#include "Student.h"
#include <fstream>
#include "Encrypt.h"
using namespace std;

Student::Student(void)
{
	this->rezult = 0;
	this->rezultFileName = "tableRez.rez";
}

Student::Student(string name, string group)
{
	this->nameTest = "����";
	this->name = name;
	this->group = group;
	this->rezult = 0;
	this->rezultFileName = "tableRez.rez";
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setGroup(string group)
{
	this->group = group;
}
	
void Student::setRezult(int rezult)
{
	this->rezult = rezult;
}

string Student::getName()
{
	return name;
}

string Student::getGroup()
{
	return group;
}

int Student::getRezult()
{
	return rezult;
}

void Student::saveRezult()
{
	Encrypt crypt(this->rezultFileName);
	//decrypt 
	crypt.decrypt();

	ofstream fileRezult;
	fileRezult.open (this->rezultFileName, ios::app);
	
	if (!fileRezult)
	{
		//create file
		fstream clear_file(this->rezultFileName, ios::out);
		clear_file.close();
	}
	//write informations of students
	fileRezult << this->name << endl;
	fileRezult << this->group << endl;
	fileRezult << this->nameTest << endl;
	fileRezult << this->rezult << endl;
	fileRezult.close();
	//encrypt
	crypt.encrypt();
}

int Student::setStudentRezult(Student* student)
{
	Encrypt crypt(this->rezultFileName);
	crypt.decrypt();	
	
	ifstream fileRezult;
	fileRezult.open (this->rezultFileName);
	
	if (!fileRezult)
		return 0;

	int i = 0;
	//read students
	while(!fileRezult.eof())
	{
		getline(fileRezult, student[i].name);
		getline(fileRezult, student[i].group);
		getline(fileRezult, student[i].nameTest);
		string strTmp;
		getline(fileRezult, strTmp);
		student[i].rezult = atoi(strTmp.c_str());
		i++;
	}
	fileRezult.close();
	
	crypt.encrypt();
	//return count students
	return i - 1;
}
//clear teble rezult
bool Student::clearRezult()
{
	ofstream fileRezult;
	fileRezult.open (this->rezultFileName);
	
	if (!fileRezult)
		return false;
	return true;
}
//right answer
void Student::rightAnswer(int ball)
{
	this->rezult += ball;
}