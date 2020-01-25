#include "CheckerStorage.hpp"

/**
 * Инициализация шашек
 * u_int8_t quantity - количество шашек у одного игрока
 * u_int8_t idUserOne - идентификатор пользователя, 
 * который может передвигать первую группу шашек
 * u_int8_t idUserTwo - идентификатор пользователя, 
 * который может передвигать вторую группу шашек
 * std::string pathToTextureOne - путь до текстур шашек первого игрока
 * std::string pathToTextureTwo - путь до текстур шашек второго игрока
 **/
void CheckerStorage::init(
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
    FactoryCheckers::factory(
        this->checkers,
        quantity,
        idUserOne,
        idUserTwo,
        pathToTextureOne,
        pathToTextureTwo,
        widthTable,
        heightTable,
        widthField,
        heightField
    );
}

std::vector<std::shared_ptr<Checker>>& CheckerStorage::getCheckers()
{
    return this->checkers; 
}