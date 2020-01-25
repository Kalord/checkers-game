#include "FactoryCheckers.hpp"

void FactoryCheckers::factory(
    std::vector<std::shared_ptr<Checker>>& checkers,
    u_int8_t quantity, 
    u_int8_t idUserOne,
    u_int8_t idUserTwo,
    std::string& pathToTextureOne,
    std::string& pathToTextureTwo,
    u_int32_t widthTable,
    u_int32_t heightTable,
    float widthField,
    float heightField
)
{
    //Стартовая позиция шашек
    float currentWidth = widthField;
    float currentHeight = heightField;
    float offsetWidth = widthField / 10.0f;
    float offsetHeight = heightField * 0.99f;
    //Количество строк с шашками
    u_int32_t quantityRows = quantity * 2 / 6;
    //Количество шашек в одной строке
    u_int32_t quantityCheckersAtRows = quantity * 2 / quantityRows;
    //Текстура для шашки
    std::string* currentTexture;
    //Текущий игрок
    u_int8_t currentUser;

    for(int i = 0; i < quantityRows; i++)
    {
        currentTexture = i < (quantityRows / 2) ? &pathToTextureOne : &pathToTextureTwo;
        currentUser = i < (quantityRows / 2) ? idUserOne : idUserTwo;
        currentWidth = i % 2 == 0 ? widthField : 0;

        if(i == (quantityRows / 2))
        {
            currentHeight = heightTable;
        }

        for(int j = 0; j < quantityCheckersAtRows; j++)
        {
            sf::Vector2f vector(currentWidth + offsetWidth, currentHeight - offsetHeight);
            checkers.push_back(std::shared_ptr<Checker>(
                new Checker(*currentTexture, vector, currentUser))
            );
            currentWidth += widthField * 2;
        }
        
        if(i < (quantityRows / 2))
        {
            currentHeight += heightField;
            continue;
        }
        currentHeight -= heightField;
    }
}