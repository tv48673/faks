#include "View.h"
#include "Model.h"
#include <fstream>
#include <iostream>
using namespace std;
View::View(Controller* _controller, Model* _model)
{
	controller = _controller;
	model = _model;

}

void View::displayCurrentProgress()
{
	cout << model->guessName << endl;
}

void View::displayHangman()
{

	if (model->livesCheck()==6)
    {
        ifstream f("FirstHangman.txt.txt");

        if (f.is_open())
        cout << f.rdbuf();

    }




	if (model->livesCheck()==5)
        {
        std::ifstream f("SecondHangman.txt");

        if (f.is_open())
        std::cout << f.rdbuf();
        }

	if (model->livesCheck()==4)
    {
		ifstream f("ThirdHangman.txt");

        if (f.is_open())
        cout << f.rdbuf();
    }
	if (model->livesCheck()==3)
		{
        ifstream f("FourthHangman.txt");

        if (f.is_open())
        cout << f.rdbuf();
		}
	if (model->livesCheck()==2)
		{
        ifstream f("FifthHangman.txt");

        if (f.is_open())
        cout << f.rdbuf();
		}
	if (model->livesCheck()==1)
    {
		ifstream f("SixthHangman.txt");

        if (f.is_open())
        cout << f.rdbuf();
    }
	if (model->livesCheck()==0)
		{
        ifstream f("SeventhHangman.txt");

        if (f.is_open())
        cout << f.rdbuf();
		}


}

void View::displayLives()
{
	cout << "Lives left: " << model->livesCheck() << endl;
}
