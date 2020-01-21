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
public:
    /**
     * Запуск игры
     **/
    static void run(
        Table* table, 
        Player* player, 
        Player* opponent, 
        size_t width, 
        size_t height
    );
};