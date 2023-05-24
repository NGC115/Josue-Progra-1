// P005 Operadores Aritmeticoss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    std::cout << "Hola \nchiquitines " << std::endl;
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "NGC";
    std::string namertag = "Champsad";
    std::cout << "Hola " << nombre << " Bienvenido al mundo de " << namertag
        << std::endl;
    std::cout << std::endl;
    Vida = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu vida_Aux restante es: " << Vida_Aux << std::endl;

}