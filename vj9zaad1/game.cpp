#include "game.h"
using namespace std;
Game::Game()
{
	cout << "unesi potreban broj bodova:" << endl;
	cin >> maxScore;
	cout << "Unesite broj pravih igraca: " << endl;
	int inputplayer;
	cin >> inputplayer;
	numOfPlayers += inputplayer;
	for (int i = 0; i < inputplayer; i++)
	{
		HumanPLayer p;
		Rplayers.push_back(p);
	}
    cout << "Unesite broj kompjuterskih igraca: " << endl;
	int compPlayers;
	cin >> compPlayers;
	numOfPlayers += compPlayers;
	for (int i = 0; i < compPlayers; i++)
	{
		ComputerPlayer p;
		_computerPlayers.push_back(p);
	}
	if(maxScore == 0 || (inputplayer == 0 && compPlayers == 0))
		_gameRunning = false;
}

void Game::game()
{
	while (_gameRunning)
	{
		int rpsize = Rplayers.size();
		for (int i = 0; i < rpsize; i++)
		{
			Rplayers[i].setHand();
		}
		int compPlayerSize = _computerPlayers.size();
		for (int i = 0; i < compPlayerSize; i++)
		{
			_computerPlayers[i].setHand();
		}
		guess();
		endOfRound();
		if (isGameOver())
            _gameRunning = false;
	}
}

int Game::allHandSum()
{
	int sum = 0;
	int pS = Rplayers.size();
	for (int i = 0; i < pS; i++)
	{
		sum += Rplayers[i].getHandSum();
	}
	int cS = _computerPlayers.size();
	for (int i = 0; i < cS; i++)
	{
		sum += _computerPlayers[i].getHandSum();
	}

	return sum;
}

void Game::guess()
{
	int pS = Rplayers.size();
	for (int i = 0; i < pS; i++)
	{
		Rplayers[i].guess();
	}
	int cS = _computerPlayers.size();
	for (int i = 0; i < cS; i++)
	{
		_computerPlayers[i].guess(numOfPlayers);
	}
}

void Game::endOfRound()
{
	int pS = Rplayers.size();
	for (int i = 0; i < pS; i++)
	{
		Rplayers[i].printHand();
		if (Rplayers[i].playerGuess == allHandSum())
        {
            cout << "bod je dobija: " << endl;
	    	cout << Rplayers[i].name << endl;
			Rplayers[i].score += 1;
        }
	}
	int cS = _computerPlayers.size();
	for (int i = 0; i < cS; i++)
	{
		_computerPlayers[i].printHand();
		if (_computerPlayers[i].playerGuess == allHandSum())
			        {
            cout << "bod je dobija: " << endl;
	    	cout << _computerPlayers[i].name << endl;
			_computerPlayers[i].score += 1;
        }
	}
}

bool Game::isGameOver()
{
    int positionOfWinner[10];
    bool weHaveAWinner = false;
    bool isRealPlayer = false;
    bool isComputer = false;
    int numberOfWinners = 0;
	int pS = Rplayers.size();
	for (int i = 0; i < pS; i++)
	{
		cout << ">" << Rplayers[i].score << "<" << endl;
		if (Rplayers[i].score >= maxScore)
        {
			positionOfWinner[numberOfWinners] = i;
			weHaveAWinner = true;
			isRealPlayer = true;
			numberOfWinners++;
        }

	}
	int cS = _computerPlayers.size();
	for (int i = 0; i < cS; i++)
	{
		if (_computerPlayers[i].score >= maxScore)
			        {
			positionOfWinner[numberOfWinners] = i;
			weHaveAWinner = true;
			isComputer = true;
			numberOfWinners++;
        }
	}
	if (weHaveAWinner)
	{
		cout << "dobitnik je: " << endl;

			for (int i = 0; i < numberOfWinners; i++)
			{
			    if (isRealPlayer)
                    cout << Rplayers[positionOfWinner[i]].name << endl;
                if (isComputer)
                    cout << _computerPlayers[positionOfWinner[i]].name << endl;
			}
                return true;
	}
	return false;


}
