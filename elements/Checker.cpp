#include "Checker.hpp"

Checker::Checker(std::string& pathToTexture, sf::Vector2f position, u_int8_t idUser)
{
    this->checkerTexture.loadFromFile(pathToTexture);
    this->checkerSprite.setTexture(this->checkerTexture);
    this->position = position;
    this->checkerSprite.setPosition(this->position);
    this->checkerSprite.setScale(1.5f, 1.5f);
    this->idUser = idUser;
}

sf::Drawable& Checker::show()
{
    return this->checkerSprite;
}