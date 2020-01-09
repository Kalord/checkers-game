#include <SFML/Graphics.hpp>

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
     * Цвет шашки
     **/
    sf::Color color;
    /**
     * Триггер указывающий, является ли шашка дамкой
     **/
    bool king;
public:
    sf::Drawable& show() override;
};