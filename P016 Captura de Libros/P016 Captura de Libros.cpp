// P016 Captura de Libros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string Titulo[5];
    std::string Autor[5];
    int Fecha[5];
    //Captura de datos
    std::cout << "Hola usuario, registra tus libros favoritos\n";
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Ingresa el t�tulo del libro " << i + 1 << std::endl;
        std::cin.ignore(); // Descarta el car�cter de nueva l�nea anterior
        getline(std::cin, Titulo[i]);
        std::cout << "Ingresa el Autor del libro " << i + 1 << std::endl;
        getline(std::cin, Autor[i]);
        std::cout << "Ingresa La fecha de publicaci�n del libro (aaaammdd)" << std::endl;
        std::cin >> Fecha[i];
        std::cin.ignore(); // Descarta el car�cter de nueva l�nea despu�s de leer Fecha[i]
    }
    //Funci�n de muestreo de la informaci�n
    std::cout << "Estos son tus libros:\n";
    for (int j = 0; j < 5; j++)
    {
        std::cout << j + 1 << ". " <<
            Titulo[j] << "\nAutor: " << Autor[j] << "\nFecha de publicaci�n: " << Fecha[j] << std::endl;
    }

    return 0;
}