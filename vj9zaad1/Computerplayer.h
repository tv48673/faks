#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H
#include "player.h"
class ComputerPlayer : public Player
{
public:
	void setHand();
	void guess(int numberOfPlayers);
};
#endif // COMPUTERPLAYER_H
