// consultoria medicoo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    bool aux = false;
    std::string fiebre, tos_seca, dificultades_respirar;

    std::cout << "�Tiene fiebre? (si/no): ";
    std::cin >> fiebre;

    std::cout << "�Tiene tos seca? (si/no): ";
    std::cin >> tos_seca;

    std::cout << "�Tiene dificultades para respirar? (si/no): ";
    std::cin >> dificultades_respirar;

    if (fiebre == "si" && tos_seca == "si" && dificultades_respirar == "si") {
        aux = true;
        std::cout << "Vaya al hospital" << std::endl;
    }
    else if (fiebre == "si" && tos_seca == "si") {
        aux = true;
        std::cout << "Qu�date en tu casa" << std::endl;
    }
    else if (fiebre == "si") {
        aux = true;
        std::cout << "Puede ser solo gripe" << std::endl;
    }

    return 0;
}