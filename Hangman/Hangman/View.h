#include <iostream>
#include "Controller.h"
class View
{
public:

	View(Controller* _controller,Model* _model);

	void displayCurrentProgress();
	void displayHangman();
	void displayLives();


private:
	Controller* controller;
	Model* model;

};

