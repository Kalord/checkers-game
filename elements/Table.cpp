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

/**
 * Инициализация шашек
 * u_int8_t quantity - количество шашек у одного игрока
 * u_int8_t idUserOne - идентификатор пользователя, 
 * который может передвигать первую группу шашек
 * u_int8_t idUserTwo - идентификатор пользователя, 
 * который может передвигать вторую группу шашек
 * std::string pathToTextureOne - путь до текстур шашек первого игрока
 * std::string pathToTextureTwo - путь до текстур шашек второго игрока
 **/
void Table::initCheckers(
    u_int8_t quantity, 
    u_int8_t idUserOne,
    u_int8_t idUserTwo, 
    std::string& pathToTextureOne,
    std::string& pathToTextureTwo
)
{
    for(u_int8_t i = 0; i < quantity * 2; i++)
    {
        if(i < quantity)
        {
            this->checkers.push_back(
            std::shared_ptr<Checker>(new Checker(
                pathToTextureOne,
                sf::Vector2f(0.0f, 0.0f),
                idUserOne
            )));
            continue;
        }
        this->checkers.push_back(
        std::shared_ptr<Checker>(new Checker(
            pathToTextureTwo,
            sf::Vector2f(0.0f, 0.0f),
            idUserTwo
        )));
    }
}



void Table::setSizeOfField(float rows, float height)
{
    this->sizeOfField.x = rows;
    this->sizeOfField.y = height;
}

sf::Vector2f& Table::getSizeOfField()
{
    return this->sizeOfField;
}

sf::Drawable& Table::show()
{
    return this->tableSprite;
}

std::vector<std::shared_ptr<Checker>>& Table::getCheckers()
{
    return this->checkers;
}