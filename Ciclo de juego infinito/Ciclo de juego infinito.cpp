// Ciclo de juego infinito.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int vidas = 3;
    char continuar;
    

    std::cout << "Hola Wuevos dias Bienvenido al juego\n" << std::endl;
    std::cout << "este juego trata de que tienes 3 vidas las cuales son eliminadas cuando el contador llega a 100 pierdes una vida\n" << std::endl;

    do 
    {
        int contador = 0;

        std::cout << " Tienes " << vidas << " vidas restantes." << std::endl;

        while (contador < 100) 
        {
            contador++;
            std::cout << "Contador: " << contador << std::endl;
        }

        vidas--;

        if (vidas > 0) 
        {
            std::cout << "¿Deseas Morir? (s/n): ";
            std::cin >> continuar;
        }
    } while (vidas > 0 && continuar == 's');

    std::cout << "YOU ARE DEAD." << std::endl;
}