// ADIVINA QUIEN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // Declarar las características del campeón a adivinar
    bool esMago = false;
    bool esAsesino = false;
    bool tieneCC = false;
    bool esADC = false;
    bool tieneMovilidad = false;

    // Hacer preguntas para adivinar el campeón
    std::cout << "Preguntas para adivinar el campeón. Responder 's' o 'n'." << std::endl;

    std::cout << "¿El campeón es un mago?" << std::endl;
    char respuesta1;
    std::cin >> respuesta1;
    if (respuesta1 == 's')
    {
        esMago = true;
    }

    std::cout << "¿El campeón es un asesino?" << std::endl;
    char respuesta2;
    std::cin >> respuesta2;
    if (respuesta2 == 's')
    {
        esAsesino = true;
    }

    std::cout << "¿El campeón tiene habilidades de control de masas (CC)?" << std::endl;
    char respuesta3;
    std::cin >> respuesta3;
    if (respuesta3 == 's')
    {
        tieneCC = true;
    }

    std::cout << "¿El campeón es un ADC (tirador)?" << std::endl;
    char respuesta4;
    std::cin >> respuesta4;
    if (respuesta4 == 's')
    {
        esADC = true;
    }

    std::cout << "¿El campeón tiene habilidades de movilidad?" << std::endl;
    char respuesta5;
    std::cin >> respuesta5;
    if (respuesta5 == 's')
    {
        tieneMovilidad = true;
    }

    // Adivinar el campeón
    std::cout << "Creo que el campeón es..." << std::endl;

    if (esMago && !esAsesino && tieneCC && !esADC && tieneMovilidad)
    {
        std::cout << "Twisted Fate" << std::endl;
    }
    else if (!esMago && esAsesino && tieneCC && !esADC && tieneMovilidad)
    {
        std::cout << "Zed" << std::endl;
    }
    else if (!esMago && !esAsesino && tieneCC && esADC && tieneMovilidad)
    {
        std::cout << "Ashe" << std::endl;
    }
    else if (!esMago && !esAsesino && tieneCC && esADC && !tieneMovilidad)
    {
        std::cout << "Jinx" << std::endl;
    }
    else if (!esMago && esAsesino && !tieneCC && !esADC && tieneMovilidad)
    {
        std::cout << "Talon" << std::endl;
    }
    else
    {
        std::cout << "Lo siento, no pude adivinar el campeón." << std::endl;
    }

    return 0;
}