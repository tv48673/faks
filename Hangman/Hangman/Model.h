#ifndef MODEL_H
#define MODEL_H

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <time.h>
class Model
{
public:
	Model(std::string fileName);

	void lifeMinus();
	int livesCheck();

	std::string guessName;
	std::string movieName;

private:
	int lives = 6;
	bool inGame = true;
};
#endif // MODEL_H

