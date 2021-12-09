#pragma once
#include "Model.h"
#include <iostream>
class Controller
{
public:
	Controller(Model* _model);

	void input();
	void checkAndReplace();
	bool checkIfGameOver();
	bool checkIfWon();

private:
	Model* model;
	char checkLetter;
	char enteredLetters[6];

};

