#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Questions
{
public:
	//The answer for the question will always attach to the string at index 0
	int answerChoosen = 5;
	const int numberOfQuestions = 4;

	void GenerateQuestions(std::string question, std::string answers[4]);
	std::string arrPosibleAnswers[4] = {};
	Questions();
	~Questions();

};