#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

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
    std::vector<Checker> checkers;
public:
    sf::Drawable& show() override;
    std::vector<Checker>& getCheckers();
};