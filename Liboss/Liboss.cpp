// Liboss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string titulo[4];
    std::string Autor[4];
    int fecha[4];
    //captura de datos
    std::cout << "hola usuario registra tus libros favoritos\n";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "ingresa el titulo del libro" << i + 1 << std::endl;
        if (i >= 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, titulo[i]);
        std::cout << "ingresa el autor del libro" << i + 1 << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "ingresa el fecha del libro aaaammdd" << std::endl;
        std::cin, fecha[i];
    }
    //funcion de muestreo de la informacion
    std::cout << "ya veo tus libros son\n";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ".-" <<
            titulo[j] << "\n El autor es:" << Autor[j] << "\nPublicado del dia" << fecha[j] << std::endl;

    }
}