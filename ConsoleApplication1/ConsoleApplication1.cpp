// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>



    int main()
    {
 
        bool esMago = false;
        bool esAsesino = false;
        bool tieneCC = false;
        bool esADC = false;
        bool tieneMovilidad = false;
        bool aux = true;

        std::cout << "Preguntas para adivinar el campeón. Responder '1' '2' " << std::endl;

        std::cout << "¿El campeón es un mago?" << std::endl;
        int respuesta1;
        std::cin >> respuesta1;
        if (respuesta1 == 1 )
        {
            esMago = true;
        }

        std::cout << "¿El campeón es un asesino?" << std::endl;
        int respuesta2;
        std::cin >> respuesta2;
        if (respuesta2 == 1)
        {
            esAsesino = true;
        }

        std::cout << "¿El campeón tiene habilidades de control de masas (CC)?" << std::endl;
        int respuesta3;
        std::cin >> respuesta3;
        if (respuesta3 == 1)
        {
            tieneCC = true;
        }

        std::cout << "¿El campeón es un ADC (tirador)?" << std::endl;
        int respuesta4;
        std::cin >> respuesta4;
        if (respuesta4 == 1)
        {
            esADC = true;
        }

        std::cout << "¿El campeón tiene habilidades de movilidad?" << std::endl;
        char respuesta5;
        std::cin >> respuesta5;
        if (respuesta5 == 1)
        {
            tieneMovilidad = true;
        }


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
        //motor de diferencia

        return 0;
    }

