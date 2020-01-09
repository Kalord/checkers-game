#include <string>

#include "elements/Table.hpp"
#include "elements/Checker.hpp"
#include "players/Player.hpp"
#include "core/Game.hpp"

int main()
{
    Table table("resources/table.png");

    Player one(1, "John");
    Player two(2, "Mike");

    std::string whiteTexture = "resources/white.png";
    std::string blackTexture = "resources/black.png";
    table.initCheckers(
        12, 
        one.getId(),
        two.getId(),
        whiteTexture,
        blackTexture
    );

    Game game(&table, &one, &two);
    game.run();

    return 0;
}