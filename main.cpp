#include <string>

#include "elements/Table.hpp"
#include "elements/Checker.hpp"
#include "players/Player.hpp"
#include "core/Game.hpp"

constexpr auto WIDTH = 800;
constexpr auto HEIGHT = 600;
constexpr auto NUMBER_OF_CHECKER = 18;

int main()
{
    Table table("resources/table.png", WIDTH, HEIGHT);

    //@tmp
    const int idUserOne = 1;
    const int idUserTwo = 2;

    Player one(idUserOne, "John");
    Player two(idUserTwo, "Mike");

    std::string textureOfWhiteChecker = "resources/white.png";
    std::string textureOfBlackChecker = "resources/black.png";
    table.initCheckers(
        NUMBER_OF_CHECKER, 
        one.getId(),
        two.getId(),
        textureOfWhiteChecker,
        textureOfBlackChecker
    );


    Game::run(&table, &one, &two, WIDTH, HEIGHT);

    return 0;
}