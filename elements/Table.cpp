#include "Table.hpp"

Table::Table(std::string pathToTexture, size_t width, size_t height)
{
    this->tableTexture.loadFromFile(pathToTexture);
    this->tableSprite.setTexture(this->tableTexture);
    this->tableSprite.setScale(
        width  / this->tableSprite.getLocalBounds().width,
        height / this->tableSprite.getLocalBounds().height
    );
}

void Table::setSizeOfField(float width, float height)
{
    this->widthField = width;
    this->heightField = height;
}

float Table::getWidthField()
{
    return this->widthField;
}

float Table::getHeihtField()
{
    return this->heightField;
}

sf::Drawable& Table::show()
{
    return this->tableSprite;
}

std::vector<std::shared_ptr<Checker>>& Table::getCheckers()
{
    return this->checkers->getCheckers();
}