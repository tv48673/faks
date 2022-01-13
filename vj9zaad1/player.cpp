#include <algorithm>
#include "player.h"
using namespace std;
Player::Player()
{
    cout << "ime igraca je: " << endl;
    cin >> name;

}

int Player::getHandSum()
{
    return hand;
}

void Player::printHand()
{
    cout << name << " ima: ";
        cout << hand << " ";
    cout << endl;
}
