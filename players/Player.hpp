#pragma once

#include <string>
#include <sys/types.h>

/**
 * Базовый класс для игроков
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class Player
{
private:
    /**
     * Идентификатор игрока
     **/
    u_int8_t id;
    /**
     * Имя игрока
     **/
    std::string name;
    /**
     * Счет игрока
     **/
    u_int8_t scope;
    /**
     * Триггер указывающий на то, 
     * что пользователь может перемещать шашки
     **/
    bool move;
public:
    Player(u_int8_t id, std::string name);

    u_int8_t getId();
    std::string getName();
    u_int8_t getScope();

    void incrementScope();

    void toggleMove();
    bool canMove(u_int8_t idUser);
};