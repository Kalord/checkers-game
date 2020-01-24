#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <sys/types.h>

#include "Checker.hpp"

/**
 * Хранилище шашек
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class CheckerStorage
{
private:
    /**
     * Шашки
     **/
    std::vector<std::shared_ptr<Checker>> checkers;
public:
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
    void init(
        u_int8_t quantity, 
        u_int8_t idUserOne,
        u_int8_t idUserTwo,
        std::string& pathToTextureOne,
        std::string& pathToTextureTwo,
        u_int32_t widthTable,
        u_int32_t heightTable,
        float widthField,
        float heightField
    );

    std::vector<std::shared_ptr<Checker>>& getCheckers();
};