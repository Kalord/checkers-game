#include <string>

#include "elements/Table.hpp"
#include "elements/Checker.hpp"
#include "players/Player.hpp"
#include "factory/FactoryTable.hpp"
#include "core/Game.hpp"

constexpr auto WIDTH = 800;
constexpr auto HEIGHT = 600;
constexpr auto NUMBER_OF_CHECKER = 18;

int main()
{
    //@tmp
    const int idUserOne = 1;
    const int idUserTwo = 2;

    Player one(idUserOne, "John");
    Player two(idUserTwo, "Mike");

    std::string textureOfTable = "resources/table.png";
    std::string textureOfWhiteChecker = "resources/white.png";
    std::string textureOfBlackChecker = "resources/black.png";

    Table table = FactoryTable::factory(
        textureOfTable, 
        WIDTH, 
        HEIGHT, 
        NUMBER_OF_CHECKER,
        one.getId(),
        two.getId(),
        textureOfWhiteChecker,
        textureOfBlackChecker,
        12,
        12
    );


    Game::run(&table, &one, &two, WIDTH, HEIGHT);

    return 0;
}