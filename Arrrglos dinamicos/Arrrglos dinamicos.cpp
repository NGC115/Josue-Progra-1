// Arrrglos dinamicos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>


int main()
{
    //para crear arreglos dinamicos nececitamos memoia no estatica.
    //esto se logra con punteos
    //creamos variable punteria y la inicializamos en null
    std::string* titulos = NULL;
    std::string* autores = NULL;
    //std::string libros [10]; //memoria estatica
    int size;
    std::cout << "cuantos pelis quieres registar?" << std::endl;
    std::cin >> size;
    //crear arreglos dinamicos
    titulos = new std::string[size];
    autores = new std::string[size];
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            std::cin.ignore();
        }
     std::cout << "Echale el nombre de la peli #:" << i << std::endl;
     getline(std::cin, titulos[i]);
     std::cout << "Quien hizo la peli #: " << i + 1 << std::endl;
     getline(std::cin,autores[i]);
    }
    //Impime la informacion
    for (int i = 0; i < size; i++)
    {
        std::cout << "el titulo del peli:" << i+1 << "es" << titulos[i] << std::endl;
        std::cout << "el titulo del peli:" << i+1 << "es" << autores[i] << std::endl;
    }   
    //Recuerden siempre destuir la memoria dinamica
    delete[]titulos;
    delete[]autores;
    titulos = NULL;
    autores = NULL;
    //Ahora solicita la informacion
}

