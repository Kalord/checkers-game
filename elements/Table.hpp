#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <memory>

#include "Checker.hpp"
#include "IShow.hpp"

/**
 * Доска для игры в шашки
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class Table: public IShow
{
private:
    /**
     * Текстура доски
     **/
    sf::Texture tableTexture;
    /**
     * Спрайт доски
     **/
    sf::Sprite tableSprite;
    /**
     * Шашки
     **/
    std::vector<std::shared_ptr<Checker>> checkers;
    /**
     * Размер ячейки
     **/
    sf::Vector2f sizeOfField;
public:
    Table(std::string pathToTexture, size_t width, size_t height);
    ~Table() {}
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
    void initCheckers(
        u_int8_t quantity, 
        u_int8_t idUserOne,
        u_int8_t idUserTwo,
        std::string& pathToTextureOne,
        std::string& pathToTextureTwo
    );

    void setSizeOfField(float rows, float height);
    sf::Vector2f& getSizeOfField();

    sf::Drawable& show() override;
    std::vector<std::shared_ptr<Checker>>& getCheckers();
};