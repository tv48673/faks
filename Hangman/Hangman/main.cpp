#include <iostream>
#include "Controller.h"
#include "Model.h"
#include "View.h"
using namespace std;

int main()
{
	Model* model = new Model("movies.txt");
	Controller* controller = new Controller(model);
	View* view = new View(controller,model);
	while (true)
	{

		view->displayLives();
		view->displayCurrentProgress();
		view->displayHangman();
		controller->input();
		controller->checkAndReplace();

		if (controller->checkIfGameOver())
		{
			cout << "End game" << endl;
			cout << model->movieName << endl;
			break;
		}
		else if (controller->checkIfWon())
		{
			cout << "You won" << endl;
			cout << model->movieName << endl;
			break;
		}
	}

}
