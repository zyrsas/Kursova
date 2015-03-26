#include "Student.h"


Student::Student(void)
{
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