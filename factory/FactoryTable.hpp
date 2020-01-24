#pragma once

#include <string>
#include <memory>
#include <sys/types.h>

#include "../elements/Table.hpp"
#include "../elements/CheckerStorage.hpp"

/**
 * Производитель доски для игры в шашки
 * 
 * Аргументы:
 *      std::string& textureTable - путь до текстуры
 *      size_t WIDTH - ширина доски
 *      size_t HEIGHT - высота доски
 *      size_t numberOfCheckers - количество шашек
 *      size_t idUserOne - идентификатор первого игрока
 *      size_t idUserTwo - идентификатор второго игрока
 *      std::string& textureOfWhiteChecker - путь до текстуры белых шашек
 *      std::string& textureOfBlackChecker - путь до текстуры черных шашек
 *      size_t quantityRowFields - количество ячеек в строке
 *      size_t quantityColumnsFields - количество ячеек в таблице
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class FactoryTable
{
public:
    static Table factory(
        std::string& textureTable,
        size_t WIDTH,
        size_t HEIGHT,
        size_t numberOfCheckers,
        size_t idUserOne,
        size_t idUserTwo,
        std::string& textureOfWhiteChecker,
        std::string& textureOfBlackChecker,
        size_t quantityRowFields,
        size_t quantityColumnsFields
    );
};