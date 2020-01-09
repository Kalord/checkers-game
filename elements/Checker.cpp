#include "Checker.hpp"

Checker::Checker(std::string& pathToTexture, sf::Vector2f position, u_int8_t idUser)
{
    this->checkerTexture.loadFromFile(pathToTexture);
    this->checkerSprite.setTexture(this->checkerTexture);
    this->position = position;
    this->checkerSprite.setPosition(this->position);
    this->idUser = idUser;
}

sf::Drawable& Checker::show()
{
    return this->checkerSprite;
}