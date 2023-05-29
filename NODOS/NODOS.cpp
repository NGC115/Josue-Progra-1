// NODOS.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <locale>
#include <Windows.h>

class nodo // tipo de dato class nodo es el nombre 
{
public:
    std::string nombre;
    int vida;
    int ataque;
    int edad;
    nodo* next;

};

int main()
{
    nodo* cabeza = NULL;
    nodo* cuello = NULL;
    nodo* pecho = NULL;
    nodo* abdomen = NULL;
    nodo* brazos = NULL;
    nodo* piernas = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    cuello = new nodo();
    pecho = new nodo();
    abdomen = new nodo();
    brazos = new nodo();
    piernas = new nodo();
    pies = new nodo();

    // sile ponemos . punto me da las opciones de la memoria
    cabeza->edad = 15; 
    cuello->next = cuello;

    cuello->edad = 10;
    cuello->next = pecho;

    pecho->edad = 7;
    pecho->next = abdomen;

    abdomen->edad = 20;
    abdomen->next = brazos;

    brazos->edad = 30;
    brazos->next = piernas;

    piernas->edad = 45;
    piernas->next = pies;

    pies->edad = 150;
    pies->next = NULL;

    //Imprimir la lista enlazada.
    while (cabeza != NULL)
    {
        std::cout << cabeza->edad << " " << std::endl;
        cabeza = cabeza->next;
    }
}
