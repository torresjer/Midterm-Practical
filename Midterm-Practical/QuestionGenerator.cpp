#include "QuestionGenerator.h"

Questions::Questions() {};

Questions::~Questions() {};

void Questions::GenerateQuestions(std::string question, std::string answers[4]) {
	std::vector<std::string> answerVect;
	
	for (int i = 0; i < numberOfQuestions; i++) {
		answerVect.push_back(answers[i]);
		std::random_shuffle(answerVect.begin(), answerVect.end());
	}


	std::cout << "Question: " + question << std::endl;
	for (int i = 0; i < numberOfQuestions; i++) {
		std::string promt = answerVect.pop_back();
		std::cout << "\nAnswers:\n\n" + (i + 1); std::cout <<". " + answerVect.p << std::endl;
	}
}