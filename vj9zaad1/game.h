#ifndef GAME_H
#define GAME_H
#include "HumanPlayer.h"
#include "Computerplayer.h"
using namespace std;
class Game
{
public:
	Game();

	void game();
	int allHandSum();
	void guess();
	void endOfRound();
	bool isGameOver();
private:
	int maxScore;
	vector<HumanPLayer> Rplayers;
	vector<ComputerPlayer> _computerPlayers;
	bool _gameRunning = true;
	int numOfPlayers;
};

#endif // GAME_H
