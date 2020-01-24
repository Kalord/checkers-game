#pragma once

#include <SFML/Graphics.hpp>
#include <sys/types.h>

#include "IShow.hpp"

/**
 * Игровая шашка
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class Checker: public IShow
{
private:
    /**
     * Текстура шашки
     **/
    sf::Texture checkerTexture;
    /**
     * Спрайт шашки
     **/
    sf::Sprite checkerSprite;
    /**
     * Идентификатор пользователя
     **/
    u_int8_t idUser;
    /**
     * Позиция шашки
     **/
    sf::Vector2f position;
    /**
     * Триггер указывающий, является ли шашка дамкой
     **/
    bool king;
public:
    Checker(std::string& pathToTexture, sf::Vector2f position, u_int8_t idUser);
    sf::Drawable& show() override;
};