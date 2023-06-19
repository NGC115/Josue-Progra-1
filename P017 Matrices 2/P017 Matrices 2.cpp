// P017 Matrices 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

const int SIZE_1 = 3;
const int SIZE_2 = 5;
const int SIZE_3 = 10;

// Llena la matriz con números aleatorios entre 0 y 10
void fillMatrix(int matriz[][10], int rows, int cols) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = std::rand() % 11; // Genera un número aleatorio entre 0 y 10
        }
    }
}

// Muestra la matriz completa
void displayMatrix(int matriz[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Muestra el valor en la posición especificada
void displayValueAtPosition(int matriz[][10], int row, int column) {
    std::cout << "El valor en la posición [" << row << "][" << column << "] es: " << matriz[row][column] << std::endl;
}

int main() {
    int matriz1[SIZE_1][10];
    int matriz2[SIZE_2][10];
    int matriz3[SIZE_3][10];

    fillMatrix(matriz1, SIZE_1, 10);
    fillMatrix(matriz2, SIZE_2, 10);
    fillMatrix(matriz3, SIZE_3, 10);

    int opcion;
    do {
        std::cout << "Seleccione la matriz que desea ver:\n";
        std::cout << "1. Matriz 3x10\n";
        std::cout << "2. Matriz 5x10\n";
        std::cout << "3. Matriz 10x10\n";
        std::cout << "0. Salir\n";
        std::cout << "Opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            displayMatrix(matriz1, SIZE_1, 10);
            break;
        case 2:
            displayMatrix(matriz2, SIZE_2, 10);
            break;
        case 3:
            displayMatrix(matriz3, SIZE_3, 10);
            break;
        case 0:
            std::cout << "Saliendo..." << std::endl;
            break;
        default:
            std::cout << "Opción inválida. Por favor, seleccione una opción válida." << std::endl;
            break;
        }

        std::cout << std::endl;
    } while (opcion != 0);

    return 0;
}