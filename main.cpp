#include <string>

#include "elements/Table.hpp"
#include "elements/Checker.hpp"
#include "players/Player.hpp"
#include "core/Game.hpp"

#define WIDTH 800
#define HEIGHT 600

int main()
{
    Table table("resources/table.png", WIDTH, HEIGHT);

    Player one(1, "John");
    Player two(2, "Mike");

    std::string whiteTexture = "resources/white.png";
    std::string blackTexture = "resources/black.png";
    table.initCheckers(
        18, 
        one.getId(),
        two.getId(),
        whiteTexture,
        blackTexture
    );


    Game game(&table, &one, &two);
    game.run(WIDTH, HEIGHT);

    return 0;
}