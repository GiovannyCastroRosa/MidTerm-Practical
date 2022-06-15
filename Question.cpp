#include "Question.h"


Question::Question(){}


void Question::CreatingQuestion()
{
	dQuetion[0] = "What does pragma once do?";
	dQuetion[1] = "What langauge does the computer read?";
	dQuetion[2] = "Can computer read source code?";
	dQuetion[3] = "What year did C++ was inveted?";
}

std::string Question::GetQuestion(int _index)
{
	return dQuetion[_index];
}

void Question::Print()
{
	int index = std::rand() % 4;
	std::cout << dQuetion[index] << std::endl;
}