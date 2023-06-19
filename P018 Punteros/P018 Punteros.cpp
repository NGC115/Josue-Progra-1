// P018 Punteros.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int rows, cols;

    std::cout << "Ingrese el n�mero de filas: ";
    std::cin >> rows;
    std::cout << "Ingrese el n�mero de columnas: ";
    std::cin >> cols;

    int** matriz = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matriz[i] = new int[cols];
    }

    // Llenar la matriz con n�meros autom�ticos o aleatorios
    if (rows > 3 || cols > 3) {
        std::srand(static_cast<unsigned>(std::time(nullptr)));
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matriz[i][j] = std::rand() % 100; // Genera un n�mero aleatorio entre 0 y 99
            }
        }
    }
    else {
        int counter = 1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matriz[i][j] = counter;
                counter++;
            }
        }
    }

    std::cout << "\nLa matriz generada es:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "Elemento en la posici�n [" << i << "][" << j << "]: " << matriz[i][j] << std::endl;
        }
    }

    // Liberar la memoria asignada para la matriz din�mica
    for (int i = 0; i < rows; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}