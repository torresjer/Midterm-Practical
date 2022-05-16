#include "QuestionGenerator.h"

Questions::Questions() {};

Questions::~Questions() {};

void Questions::GenerateQuestions(std::string question, std::string answers[4]) {
	std::vector<std::string> answerVect;
	std::string temp[4] = {};
	bool exit = false;
	
	for (int i = 0; i < numberOfQuestions; i++) {
		answerVect.push_back(answers[i]);
	}
	std::random_shuffle(answerVect.begin(), answerVect.end());


	while (!exit)
	{
		std::cout << "Question: " + question << std::endl;
		for (int i = 0; i < numberOfQuestions; i++) {
			temp[i] = answerVect.back();
			answerVect.pop_back();
			std::cout << "\nAnswers:\n\n" + (i + 1); std::cout << ". " + temp[i] << std::endl;
		}

		std::cout << "Choice: ";
		std::cin >> answerChoosen;
		answerChoosen -= 1;
		std::cin.ignore();
		
		

		if (answerChoosen > 3 || answerChoosen < 0) {
			std::cout << "\n\nNot a vaild answer please try again";
			std::cin.ignore();
			system("CLS");
			continue;
		}

		if (answers[0] == temp[answerChoosen]) {

			std::cout << "That is correct!";
			exit = true;
		}
		else {
			std::cout << "Incorrect!";
			exit = true;

		}
	}

	
}
