#include "FactoryTable.hpp"

Table FactoryTable::factory(
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
)
{
    Table table(textureTable, WIDTH, HEIGHT);

    std::shared_ptr<CheckerStorage> checkers(
        new CheckerStorage
    );

    table.setSizeOfField(WIDTH / quantityRowFields, HEIGHT / quantityColumnsFields);

    checkers->init(
        numberOfCheckers, 
        idUserOne,
        idUserTwo,
        textureOfWhiteChecker,
        textureOfBlackChecker,
        table.getWidth(),
        table.getHeight(),
        table.getWidthField(),
        table.getHeihtField()
    );

    table.addCheckers(checkers);

    return table;
}