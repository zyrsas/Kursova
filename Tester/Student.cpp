#include "Student.h"


Student::Student(void)
{
	this->rezult = 0;
}

Student::Student(string name, string group)
{
	this->name = name;
	this->group = group;
	this->rezult = 0;
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
	
}

void Student::rightAnswer(int ball)
{
	this->rezult += ball;
}