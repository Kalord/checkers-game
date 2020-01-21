#pragma once

#include <string>
#include <sys/types.h>

#include "../elements/Table.hpp"

/**
 * Производитель доски для игры в шашки
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
        std::string& textureOfBlackChecker
    );
};