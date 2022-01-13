#include "time.h"
#include "game.h"

int main()
{

	srand(time(NULL));

	Game game;
    game.game();
	return 0;
}
