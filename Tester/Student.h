#pragma once
#include <string>
using namespace std;

class Student
{
private:
	string name;
	string group;
	int rezult;
public:
	Student(void);
	Student(string name, string group);

	void setName(string name);
	void setGroup(string group);
	void setRezult(int rezult);

	string getName();
	string getGroup();
	int getRezult();
	
};

