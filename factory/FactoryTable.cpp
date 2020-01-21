#include "FactoryTable.hpp"

Table FactoryTable::factory(
    std::string& textureTable,
    size_t WIDTH,
    size_t HEIGHT,
    size_t numberOfCheckers,
    size_t idUserOne,
    size_t idUserTwo,
    std::string& textureOfWhiteChecker,
    std::string& textureOfBlackChecker
)
{
    Table table(textureTable, WIDTH, HEIGHT);
    table.initCheckers(
        numberOfCheckers, 
        idUserOne,
        idUserTwo,
        textureOfWhiteChecker,
        textureOfBlackChecker
    );

    return table;
}