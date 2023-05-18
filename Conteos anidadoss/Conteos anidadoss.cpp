// Conteos anidadoss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    for (int i = 0; i < 10; i++)//conteo externo
    {

        std::cout << i << " ";
        for (int j = 0; j < 10; j++)//conteo inteno
        {
            std::cout << j << "";

        }
        std::cout << std::endl;
    }

}