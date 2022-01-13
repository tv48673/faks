#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <iostream>
using namespace std;
class Player
{
public:
	Player();

	int getHandSum();
	void printHand();

	string name;
	int hand;
	int score = 0;
	int playerGuess;
};
#endif // PLAYER_H
