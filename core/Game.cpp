#include "Game.hpp"

Game::Game(Table* table, Player* player, Player* opponent) :
table(table), player(player), opponent(opponent)
{

}

Game::~Game()
{

}

/**
 * Запуск игры
 **/
void Game::run()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Checker game");

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.clear();

        window.draw(this->table->show());
        std::vector<Checker> checkers = this->table->getCheckers(); 
        for(int i = 0; i < checkers.size(); i++)
        {
            window.draw(checkers[i].show());
        }

        window.display();
    }
}