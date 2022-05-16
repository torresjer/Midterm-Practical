#include "QuestionGenerator.h"

Questions::Questions() {};

Questions::~Questions() {};

void Questions::GenerateQuestions(std::string question, std::string answers[4]) {
	std::vector<std::string> answerVect;
	std::string temp[4] = {};
	bool exit = false;
	
	

	while (!exit)
	{
		for (int i = 0; i < numberOfQuestions; i++) {
			answerVect.push_back(answers[i]);
		}
		std::random_shuffle(answerVect.begin(), answerVect.end());

		std::cout << "Question: " + question << std::endl;
		for (int i = 0; i < numberOfQuestions; i++) {
			temp[i] = answerVect.back();
			answerVect.pop_back();
			int options = i + 1;
			std::cout << options; std::cout << ". " + temp[i] << std::endl;
		}

		std::cout << "Choice: ";
		std::cin >> answerChoosen;
		answerChoosen -= 1;
		std::cin.ignore();
		
		

		if (answerChoosen > 3 || answerChoosen < 0) {
			std::cout << "\n\nNot a vaild answer please try again";
			std::cin.get();
			system("CLS");
			answerChoosen = 0;
			continue;
		}

		if (answers[0] == temp[answerChoosen]) {

			std::cout << "That is correct!";
			std::cin.ignore();
			std::cin.get();
			system("CLS");
			exit = true;
			
		}
		else {
			std::cout << "Incorrect!";
			std::cin.ignore();
			std::cin.get();
			system("CLS");
			exit = true;

		}
	}

	
}
