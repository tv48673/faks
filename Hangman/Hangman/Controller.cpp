#include "Controller.h"
static int counter = 0;
using namespace std;
Controller::Controller(Model* _model)
{
	model = _model;
}

void Controller::input()
{
	cout << "Enter a letter" << endl;
	cin >> checkLetter;
	enteredLetters[counter++] = checkLetter;
}

void Controller::checkAndReplace()
{
	int n = model->guessName.length();
	string name = model->movieName;

	for (int i = 0; i < counter; i++)
    {
        if (counter > 1 && enteredLetters[counter - 1] == enteredLetters[i] && (counter - 1) != i)
        {
            cout << "You already tried that";
            return;
        }
    }

	bool found = false;
	for (int i = 0; i < n; i++)
	{
		if (isalpha(model->movieName[i]))
		{
			if (tolower(model->movieName[i]) == tolower(checkLetter))
			{
				model->guessName[i] = model->movieName[i];
				found = true;
			}
		}
	}
	if (!found)
	{
		model->lifeMinus();
	}

}

bool Controller::checkIfGameOver()
{
	if (model->livesCheck() > 0)
		return false;
	else
		return true;
}

bool Controller::checkIfWon()
{
	if (model->guessName == model->movieName)
		return true;
	else
		return false;
}
