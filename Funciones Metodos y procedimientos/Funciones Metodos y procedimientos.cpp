// Funciones Metodos y procedimientos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
//Procedimiento para imprimir la matriz
void relleno(int** pepe, int a, int b)
{
    srand((unsigned)time(NULL));//SEMILLERO PARA GENERAR NUMEROS ALEATORIOS
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            pepe[i][j] = rand() % 101;//101 datos que son de 0 a 100
            std::cout << "|" << pepe[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "Vamos a ver la matriz rellena " << pepe << std::endl; 
}



int main()
{
    int filas = 0;
    int columnas = 0;
    std::cout << "Filas?\n";
    std::cin >> filas;
    std::cout << "Columnas\n";
    std::cin >> columnas;
    //Creación de una matriz dinámica
    int** matriz = new int* [filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas]; 
    }
    //Relleno de matriz
    //Nombre de función(parametro1, parametro2, parametro3);
    relleno(matriz, filas, columnas);

    delete[] matriz;
    matriz = NULL;
    std::cout << "Vamos a ver la matriz " << matriz << std::endl;
}

