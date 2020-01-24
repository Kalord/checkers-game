#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <string>
#include <memory>
#include <sys/types.h>

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
     * Размер доски
     **/
    u_int32_t width;
    u_int32_t height;
    /**
     * Размер ячейки
     **/
    float widthField;
    float heightField;
public:
    Table(std::string pathToTexture, u_int32_t width, u_int32_t height);
    ~Table() {}

    void addCheckers(std::shared_ptr<CheckerStorage> checkers)
    {
        this->checkers = checkers;
    }

    u_int32_t getWidth();
    u_int32_t getHeight();

    void setSizeOfField(float rows, float height);
    float getWidthField();
    float getHeihtField();

    sf::Drawable& show() override;
    std::vector<std::shared_ptr<Checker>>& getCheckers();
};