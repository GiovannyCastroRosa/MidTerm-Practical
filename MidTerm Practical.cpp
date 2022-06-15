// MidTerm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Answerd.h"
void Print();
int main()
{
	srand(time(NULL));
	Print();
}

void Print() {

	Question qst;
	qst.CreatingQuestion();
	Answerd asw;
	asw.CreateAnswerd();
	int index = std::rand() % 3 + 0;
	int ran;
	int right;
	std::cout << qst.GetQuestion(index) << std::endl;
	switch (index)
	{
	case 0:
	{
		std::cout << "1." << asw.dAnswer[4] << '\n' << "2." << asw.dAnswer[6] << '\n' << "3." << asw.dAnswer[8] << '\n' << "4." << asw.dAnswer[7] << std::endl;
		std::cout << "pick a number >> " << '\0';
		std::cin >> right;
		if (right == 1)
			std::cout << "Right answerd!" << std::endl;
		else
			std::cout << "Wrong Answer" << std::endl;
		break;
	}
	case 1:
	{
		std::cout << "1." << asw.dAnswer[13] << '\n' << "2." << asw.dAnswer[10] << '\n' << "3." << asw.dAnswer[11] << '\n' << "4." << asw.dAnswer[12] << std::endl;
		std::cout << "pick a number >> " << '\0';
		std::cin >> right;
		if (right == 2)
			std::cout << "Right answerd!" << std::endl;
		else
			std::cout << "Wrong Answer" << std::endl;
		break;
	}
	case 2:
	{
		std::cout << "1." << asw.dAnswer[9] << '\n' << "2." << asw.dAnswer[8] << std::endl;
		std::cout << "pick a number >> " << '\0';
		std::cin >> right;
		if (right == 2)
			std::cout << "Right answerd!" << std::endl;
		else
			std::cout << "Wrong Answer" << std::endl;
		break;
	}
	case 3:
	{
		std::cout << "1." << asw.dAnswer[2] << '\n' << "2." << asw.dAnswer[3] << '\n' << "3." << asw.dAnswer[0] << '\n' << "4." << asw.dAnswer[1] << std::endl;
		std::cout << "pick a number >> " << '\0';
		std::cin >> right;
		if (right == 3)
			std::cout << "Right answerd!" << std::endl;
		else
			std::cout << "Wrong Answer" << std::endl;
		break;
	}
	default:
		break;
	}

}

