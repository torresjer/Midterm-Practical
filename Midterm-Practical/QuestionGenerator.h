#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Questions
{
public:
	const int numberOfQuestions = 4;
	Questions();
	~Questions();
	

private:
	//The answer for the question will always attach to the string at index 0
	int answerChoosen = 5;
	std::string arrPosibleAnswers[4] = {};
	void GenerateQuestions(std::string question, std::string answers[]);
	void SetAnswers(std::string answersToQuestion[]);
	void SetAnswerChoosen(int answerChoosen);
	void GetAnswerChoosen();
	



}