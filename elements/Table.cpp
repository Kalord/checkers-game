#include "Table.hpp"

Table::Table(std::string pathToTexture)
{
    this->tableTexture.loadFromFile(pathToTexture);
    this->tableSprite.setTexture(this->tableTexture);
}

sf::Drawable& Table::show()
{
    return this->tableSprite;
}

std::vector<Checker>& Table::getCheckers()
{
    return this->checkers;
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
            Checker checker(
                pathToTextureOne,
                sf::Vector2f(0.0f, 0.0f),
                idUserOne
            );
            this->checkers.push_back(checker);
            continue;
        }
        Checker checker(
            pathToTextureTwo,
            sf::Vector2f(0.0f, 0.0f),
            idUserTwo
        );
        this->checkers.push_back(checker);
    }
}