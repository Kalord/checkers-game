#include "Table.hpp"

sf::Drawable& Table::show()
{
    return this->tableSprite;
}

std::vector<Checker>& Table::getCheckers()
{
    return this->checkers;
}