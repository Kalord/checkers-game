#include "Player.hpp"

Player::Player(std::string name) :
name(name), scope(0), move(false)
{
    
}

std::string Player::getName()
{
    return this->name;
}

u_int8_t Player::getScope()
{
    return this->scope;
}

void Player::incremeScope()
{
    this->scope++;
}

void Player::toggleMove()
{
    if(this->move)
    {
        move = false;
        return;
    }
    move = true;
}

bool Player::canMove()
{
    return this->move;
}