#include "Table.hpp"

Table::Table(std::string pathToTexture, u_int32_t width, u_int32_t height)
{
    this->tableTexture.loadFromFile(pathToTexture);
    this->tableSprite.setTexture(this->tableTexture);
    this->width = width;
    this->height = height;
    this->tableSprite.setScale(
        width  / this->tableSprite.getLocalBounds().width,
        height / this->tableSprite.getLocalBounds().height
    );
}

u_int32_t Table::getWidth()
{
    return this->width;
}

u_int32_t Table::getHeight()
{
    return this->height;
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