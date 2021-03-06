#pragma once
#include <string>
#include "Question.h"
using namespace std;

class Test
{
private:
	string nameTest;
	int countQuestion;
	int time;			//Time on the test
	int ball;			//Count ball on the answer options
	string author;
	string fileName;
public:
	Test(void);
	void setNameTest(string nameTest) {this->nameTest = nameTest;};
	void setCountQuestion(int countQuestion) {this->countQuestion = countQuestion;};
	void setTime(int time) {this->time = time;};
	void setBall(int ball) {this->ball = ball;};
	void setAuthor(string author) {this->author = author;};
	void setFileName(string fileName) {this->fileName = fileName;};
	void writeInFile(Question quest[], int count);
	void setWithFile(string fileName);
	string getNameTest(){return this->nameTest;};
	int getCountQuestion() {return this->countQuestion;};
	string getAuthor(){return this->author;};
	int getTime() {return this->time;};
	int getBall() {return this->ball;}; 
};

