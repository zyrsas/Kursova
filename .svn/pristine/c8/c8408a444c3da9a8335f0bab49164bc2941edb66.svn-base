#pragma once
#include <iostream>
#include <string>
using namespace std;

//
class Question
{
private:
	string question;
	string options_A;	//Options question
	string options_B;
	string options_C;
	string options_D;
	string author;		//name author

	int count_answer;
	int right_answer;	//Answer
	int time;			//Time on the test
	int ball;			//Count ball on the answer options
public:
	Question(void);
	void setOptions(string options[]);
	void setQuestion(string question) {this->question = question;};	
	void setAuthor(string author) {this->author = author;};
	void setCountAnswer(int count_answer) {this->count_answer = count_answer;};
	void setRightAnswer(int right_answer) {this->right_answer = right_answer;}; 
	void setTime(int time) {this->time = time;};
	void setBall(int ball) {this->ball = ball;};

	//String^ getOptions(int index);
	string getQuestion(){return this->question;};
	string getAuthor(){return this->author;};
	int getCountAnswer() {return this->count_answer;};
	int getRightAnswer() {return this->right_answer;};
	int getTime() {return this->time;};
	int getBall() {return this->ball;}; 

};

