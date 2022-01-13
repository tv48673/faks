#include <algorithm>
#include "HumanPlayer.h"
using namespace std;

void HumanPLayer::setHand()
{

        cout << name << " uzmi zbroj  kovanica, ili 0 za prekid" << endl;
        int coin;
        cin >> coin;
        if (coin == 0)
            return;
        else if (coin != 1 && coin != 2 && coin != 3 && coin != 5 && coin != 6 && coin != 7 && coin != 8)
        {
                        cout << "Uzmite drugi zbroj: 1, 2 ,3 , 5, 6 , 7 , 8" << endl;
                        setHand();
        }

        else
            hand = coin;
}

void HumanPLayer::guess()
{
    cout << name << " probaj pogodit broj kovanica " <<endl;
    cin >> playerGuess;
}
