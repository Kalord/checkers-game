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
void Game::run(size_t width, size_t height)
{
    sf::RenderWindow window(sf::VideoMode(width, height), "Checker game");

    while(window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();
        }

        window.clear();

        window.draw(this->table->show());
        std::vector<std::shared_ptr<Checker>> checkers = this->table->getCheckers(); 
        for(int i = 0; i < checkers.size(); i++)
        {
            window.draw(checkers[i]->show());
        }

        window.display();
    }
}