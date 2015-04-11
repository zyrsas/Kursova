#include "Test.h"
#include <iostream>
#include <fstream>
using namespace std;


Test::Test(void)
{
	this->time = 10;
	this->ball = 5;
	this->author = "Zyruk O.V.";
	this->fileName = "test.bd";
}

//write Question in file
void Test::writeInFile(Question quest[], int count)
{
		ofstream myfile;
		myfile.open (this->fileName);
		myfile << count << endl;
		for (int i = 0; i < count; i++)
		{
			myfile << quest[i].toString();
		}
		//write settings test in file
		myfile << "setting: \n";
		myfile << this->time << "\n";
		myfile << this->ball << "\n";
		myfile << this->author << "\n";
		myfile.close();
}

//set settings with file
void Test::setWithFile(string fileName)
{
	ifstream in (fileName);
	if (!in)
	{
		return ;
	}
	string myString;
	getline(in, myString);
	int count = atoi(myString.c_str());
	string buf;
	int i = 0;
	int value;

	while (i < count)
	{
		getline(in, buf);
		getline(in, buf);
		value = atoi(buf.c_str());
		for(int j = 0; j < value; j++)
		{
			getline(in, buf);
		}
		getline(in, buf);
		i++;
	}
	//read "settings:"
	getline(in, myString);

	//read time
	getline(in, myString);
	value = atoi(myString.c_str());
	this->time = value;

	//read ball
	getline(in, myString);
	value = atoi(myString.c_str());
	this->ball = value;

	//read author
	getline(in, this->author);
	in.close();
}