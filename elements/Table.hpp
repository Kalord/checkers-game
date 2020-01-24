#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <memory>

#include "Checker.hpp"
#include "IShow.hpp"
#include "CheckerStorage.hpp"

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
    std::shared_ptr<CheckerStorage> checkers;
    /**
     * Размер ячейки
     **/
    float widthField;
    float heightField;
public:
    Table(std::string pathToTexture, size_t width, size_t height);
    ~Table() {}

    void addCheckers(std::shared_ptr<CheckerStorage> checkers)
    {
        this->checkers = checkers;
    }

    void setSizeOfField(float rows, float height);
    float getWidthField();
    float getHeihtField();

    sf::Drawable& show() override;
    std::vector<std::shared_ptr<Checker>>& getCheckers();
};