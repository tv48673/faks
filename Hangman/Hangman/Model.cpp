#include "Model.h"
#include<iostream>
using namespace std;
Model::Model(string fileName)
{

	ifstream f(fileName);
	string str;
	int randomNum;
	cout <<"input number lower than 250";
	cin >> randomNum;
	int i=0;
	while ( i != randomNum)
	{
		getline(f, str);
		i++;
	}
	movieName = str;
	guessName = movieName;
	int strLen = guessName.length();
	for (int i = 0; i < strLen ; i++)
	{
		if (isalpha(guessName[i]))
		{
			guessName[i] = '_';
		}
	}
}

void Model::lifeMinus()
{
	lives--;
}

int Model::livesCheck()
{
	return lives;
}

