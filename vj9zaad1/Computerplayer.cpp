#include <algorithm>
#include "ComputerPlayer.h"

void ComputerPlayer::setHand()
{
		int randNum = rand() % (8 + 1);
		if (randNum == 0 || randNum == 4)
			return;
		else if (randNum == 1)
			hand = 1;
        else if (randNum == 2)
			hand = 2;
		else if (randNum == 3)
			hand = 3;
		else if (randNum == 5)
			hand = 5;
		else if (randNum == 6)
			hand = 6;
		else if (randNum == 7)
			hand = 7;
		else if (randNum == 8)
			hand = 8;
}

void ComputerPlayer::guess(int numberOfPlayers)
{
	playerGuess = rand() % (8 * numberOfPlayers + 1);
}
