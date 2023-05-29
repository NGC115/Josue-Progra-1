// poke.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <windows.h>

class nodo
{
public:
    std::string nombre;
    int ataque;
    int edad;
    int defensa;
    nodo* next;
};

int main()
{
    nodo* Cabeza = NULL;
    nodo* Cuello = NULL;
    nodo* Pecho = NULL;
    nodo* Abdomen = NULL;
    nodo* Brazos = NULL;
    nodo* Piernas = NULL;
    nodo* Pies = NULL;

    Cabeza = new nodo();
    Cuello = new nodo();
    Pecho = new nodo();
    Abdomen = new nodo();
    Brazos = new nodo();
    Piernas = new nodo();
    Pies = new nodo();

    Cabeza->edad = 15;
    Cabeza->ataque = 20;
    Cabeza->defensa = 22;
    Cabeza->next = Cuello;

    Cuello->edad = 10;
    Cuello->ataque = 0;
    Cuello->defensa = 5;
    Cuello->next = Pecho;

    Pecho->edad = 7;
    Pecho->ataque = 0;
    Pecho->defensa = 50;
    Pecho->next = Abdomen;

    Abdomen->edad = 20;
    Abdomen->ataque = 0;
    Abdomen->defensa = 30;
    Abdomen->next = Brazos;

    Brazos->edad = 30;
    Brazos->defensa = 0;
    Brazos->ataque = 50;
    Brazos->next = Piernas;

    Piernas->edad = 45;
    Piernas->ataque = 16;
    Piernas->defensa = 23;
    Piernas->next = Pies;

    Pies->edad = 150;
    Pies->defensa = 0;
    Pies->ataque = 60;
    Pies->next = NULL;

    //Imprimir la lista enlazada.
    while (Cabeza != NULL)
    {
        std::cout << "defensa\n" << Cabeza->defensa << std::endl;
        std::cout << "ataque\n" << Cabeza->ataque << std::endl;
        std::cout << "edad\n" << Cabeza->edad << std::endl;
        Cabeza = Cabeza->next;
    }

}