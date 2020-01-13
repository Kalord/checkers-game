#pragma once

#include <memory>

#include "../elements/Table.hpp"
#include "../players/Player.hpp"

/**
 * Сущность игры
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class Game
{
private:
    /**
     * Доска для игры в шашки
     **/
    Table* table;

    /**
     * Игрок
     **/
    Player* player;

    /**
     * Оппонент для игры в шашки
     **/
    Player* opponent;

public:
    Game(Table* table, Player* player, Player* opponent);
    ~Game();
    /**
     * Запуск игры
     **/
    void run(size_t width, size_t height);
};