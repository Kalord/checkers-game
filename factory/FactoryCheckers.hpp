#pragma once

#include <memory>
#include <vector>

#include "../elements/Checker.hpp"

/**
 * Производитель шашек
 * 
 * @author Artem Tyutnev <artem.tyutnev.developer@gmail.com>
 **/
class FactoryCheckers
{
public:
    static void factory(
        std::vector<std::shared_ptr<Checker>>& checkers,
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
};