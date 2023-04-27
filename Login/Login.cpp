// Login.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string> 

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    bool aux = true;
    std::string name1;
    std::string name2 = "Josue";
    std::string contra1;
    std::string contra2 = "115";

    while (aux)//Mientras que la evaluación sea verdadera se ejecutara lo que esta dentro
    {
        std::cout << "hola Cual es tu nombre? \n";
        getline(std::cin, name1);
        if (name1 == name2)//Si el nombre ingresado y el guardado son iguales dar bienvenida
        {
            std::cout << "bienvenido de vuelta " << name1 << " \n";
            std::cout << "Para confirmar que eres tu ingresa tu contraseña: \n";
            getline(std::cin, contra1);
            if (contra1 == contra2)//Si el nombre es bueno entonces solicitar contraseña
            {
                std::cout << "pero cuanto gusto de volverte a ver\n";
                system("pause");
            }
            else //Si el usuario se equivoca en la contraseña repite todo el proceso
            {
                std::cout << "Que se me hace que no eres tu \n";
                system("pause");
            }
        }
        else //Si no son iguales darle una patada
        {
            std::cout << "Saquese no lo conozco " << std::endl;
            system("pause");
        }
        system("cls");
    }
}


