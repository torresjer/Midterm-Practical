// Midterm-Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "QuestionGenerator.h"

int main()
{
	
	Questions q;
	//all correct answeres listed on the 0 index
	std::string question1[4] = { "Blue", "Red", "Green", "Yellow" };
	std::string question2[4] = { "6", "5", "7", "9"};
	std::string question3[4] = { "Joey", "Bobby", "Cub", "Steve" };
	std::string question4[4] = { "1776", "1957", "1872", "1512" };

	q.GenerateQuestions("What Color is the sky?", question1);
	q.GenerateQuestions("What is 3+3?", question2);
	q.GenerateQuestions("What is the name of a baby kangaroo?", question3);
	q.GenerateQuestions("When was america founded?", question4);

	std::cout << "Thank you for your time!";
	std::cin.get();
	std::cin.ignore();


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
