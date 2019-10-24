//
// Created by conejo on 17/10/19.
//

#include "Player.h"

int Player::getCredits() const
{
    return credits;
}

void Player::setCredits(int value)
{
    credits = value;
}

void Player::updatemapa(int P)
{
    this->mapa[P%10][P/10]=1;
}

std::string Player::verMapa()
{
    std::string mp="";
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            mp.append(std::to_string(mapa[i][j])+",");
        }
        mp+= "      ";
    }
    return mp;
}
