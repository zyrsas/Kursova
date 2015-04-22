#include "Question.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
#include "Encrypt.h"
using namespace std;

Question::Question(void)
{
	
}

void Question::setOptions(string options, int index)
{
	this->options[index] = options;
}

string Question::getOptions(int index)
{
	return this->options[index];
}

string Question::toString()
{
	string countAns;
	string rightAns;
	// stream used for the conversion
	ostringstream convert;   
	// insert the textual representation of 'Number' in the characters in the stream
	convert << this->count_answer;      
	countAns = convert.str();
	
	ostringstream convert2;
	// insert the textual representation of 'Number' in the characters in the stream
	convert2 << this->right_answer;     
	rightAns = convert2.str();

	//Qestion to string for write in file
	string rezult;
	rezult += this->question + "\n";
	rezult += countAns + "\n";
	for (int i = 0; i < this->count_answer; i++)
		rezult += this->getOptions(i) + "\n";
	rezult += rightAns + "\n";

	return rezult;
}

int Question::setWithFile(Question* quest, string fileName)
{
	//Encrypt crypt(fileName);
	//decrypt file
	//crypt.decrypt();
	ifstream in (fileName);
	if (!in)
		return 0;
	string myString;
	getline(in, myString);
	int count = atoi(myString.c_str());
	int i = 0;
	int value;
	//read question
	while (i < count)
	{
		getline(in, quest[i].question);
		getline(in, myString);
		value = atoi(myString.c_str());
		quest[i].count_answer = value;
		
		for(int j = 0; j < value; j++)
			getline(in, quest[i].options[j]);
		
		getline(in, myString);
		value = atoi(myString.c_str());
		quest[i].right_answer = value;
		i++;
	}
	in.close();
	//encrypt
	//crypt.encrypt();
	//return count questions
	return count;
}


