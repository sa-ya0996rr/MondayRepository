#include "Player.h"
#include <iostream>

Player::Player()
{
    total = 0;
}

void Player::addCard(Card* card)
{
    hand.push_back(card);
    total += card->getValue();
}

int Player::getTotal()
{
    return total;
}

void Player::showCards()
{
    for (int i = 0; i < hand.size(); i++)
    {
        std::cout << hand[i]->getValue();

        if (i < hand.size() - 1)
        {
            std::cout << "A";
        }
    }

    std::cout << std::endl;
}
