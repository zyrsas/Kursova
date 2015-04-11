#pragma once
#include <iostream>
#include <string>
using namespace std;

//
class Question
{
private:
	string question;
	string options[4];
	int count_answer;
	int right_answer;	//Answer
	
public:
	Question(void);
	void setOptions(string options, int index);
	void setQuestion(string question) {this->question = question;};	
	void setCountAnswer(int count_answer) {this->count_answer = count_answer;};
	void setRightAnswer(int right_answer) {this->right_answer = right_answer;}; 
	
	string getOptions(int index);
	string getQuestion(){return this->question;};
	int getCountAnswer() {return this->count_answer;};
	int getRightAnswer() {return this->right_answer;};
	string toString();
	int setWithFile(Question* quest, string fileName);
	bool checkAnswer(int index);
};

