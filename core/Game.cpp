#include "Game.hpp"

/**
 * Запуск игры
 **/
void Game::run(        
    Table* table, 
    Player* player, 
    Player* opponent, 
    size_t width, 
    size_t height
)
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

        window.draw(table->show());
        std::vector<std::shared_ptr<Checker>> checkers = table->getCheckers(); 
        for(int i = 0; i < checkers.size(); i++)
        {
            window.draw(checkers[i]->show());
        }

        window.display();
    }
}