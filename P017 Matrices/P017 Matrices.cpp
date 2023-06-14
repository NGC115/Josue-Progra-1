// P017 Matrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Matriz 2x3
    int matriz2x3[2][3];

    std::cout << "Ingrese los datos para la matriz 2x3:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
            std::cin >> matriz2x3[i][j];
        }
    }

    std::cout << "Matriz 2x3:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "[" << i << "][" << j << "]: " << matriz2x3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Matriz dinámica de tamaño n*m
    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    int** matrizDinamica = new int* [filas];
    for (int i = 0; i < filas; i++)
    {
        matrizDinamica[i] = new int[columnas];
    }

    if (filas > 3 || columnas > 3)
    {
        std::cout << "Se generarán datos aleatorios para la matriz.\n";
        std::srand(std::time(0));
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                matrizDinamica[i][j] = std::rand() % 10;  // Generar un número aleatorio entre 0 y 9
            }
        }
    }
    else
    {
        std::cout << "Ingrese los datos para la matriz:\n";
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
                std::cin >> matrizDinamica[i][j];
            }
        }
    }

    std::cout << "Matriz:\n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "[" << i << "][" << j << "]: " << matrizDinamica[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Liberar memoria
    for (int i = 0; i < filas; i++)
    {
        delete[] matrizDinamica[i];
    }
    delete[] matrizDinamica;

    return 0;
}