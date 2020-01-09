#include "Player.hpp"

Player::Player(u_int8_t id, std::string name) :
id(id), name(name), scope(0), move(false)
{
    
}

u_int8_t Player::getId()
{
    return this->id;
}

std::string Player::getName()
{
    return this->name;
}

u_int8_t Player::getScope()
{
    return this->scope;
}

void Player::incrementScope()
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

bool Player::canMove(u_int8_t idUser)
{
    return this->move && idUser == this->id;
}