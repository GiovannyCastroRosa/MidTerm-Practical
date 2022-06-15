#pragma once
#include <string>
#include <iostream>
class Question
{
public:
	std::string dQuetion[4];
	Question();
	void CreatingQuestion();
	std::string GetQuestion(int _index);
	void Print();

};

