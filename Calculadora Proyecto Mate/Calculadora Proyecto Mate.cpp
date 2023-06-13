// Calculadora Proyecto Mate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Funci�n para calcular la probabilidad simple
double calcularProbabilidadSimple(int eventosFavorables, int eventosPosibles) {
    if (eventosPosibles != 0) {
        return static_cast<double>(eventosFavorables) / eventosPosibles;
    }
    else {
        return 0.0;
    }
}

// Funci�n para calcular la probabilidad usando la regla de la suma
double calcularProbabilidadSuma(double probabilidadEvento1, double probabilidadEvento2) {
    if (probabilidadEvento1 >= 0 && probabilidadEvento1 <= 1 && probabilidadEvento2 >= 0 && probabilidadEvento2 <= 1) {
        return probabilidadEvento1 + probabilidadEvento2;
    }
    else {
        return 0.0;
    }
}

// Funci�n para calcular la probabilidad usando la regla de la multiplicaci�n
double calcularProbabilidadMultiplicacion(double probabilidadEvento1, double probabilidadEvento2) {
    if (probabilidadEvento1 >= 0 && probabilidadEvento1 <= 1 && probabilidadEvento2 >= 0 && probabilidadEvento2 <= 1) {
        return probabilidadEvento1 * probabilidadEvento2;
    }
    else {
        return 0.0;
    }
}

int main() {
    int eventosFavorables, eventosPosibles;
    double probabilidadEvento1, probabilidadEvento2;

    // Calcular la probabilidad simple
    std::cout << "C�lculo de Probabilidad Simple" << std::endl;
    std::cout << "Ingrese el n�mero de eventos favorables: ";
    std::cin >> eventosFavorables;
    std::cout << "Ingrese el n�mero de eventos posibles: ";
    std::cin >> eventosPosibles;
    double probabilidadSimple = calcularProbabilidadSimple(eventosFavorables, eventosPosibles);
    std::cout << "La probabilidad es: " << probabilidadSimple << std::endl;

    // Calcular la probabilidad usando la regla de la suma
    std::cout << "C�lculo de Probabilidad usando la Regla de la Suma" << std::endl;
    std::cout << "Ingrese la probabilidad del evento 1: ";
    std::cin >> probabilidadEvento1;
    std::cout << "Ingrese la probabilidad del evento 2: ";
    std::cin >> probabilidadEvento2;
    double probabilidadSuma = calcularProbabilidadSuma(probabilidadEvento1, probabilidadEvento2);
    std::cout << "La probabilidad es: " << probabilidadSuma << std::endl << std::endl;

    // Calcular la probabilidad usando la regla de la multiplicaci�n
    std::cout << "C�lculo de Probabilidad usando la Regla de la Multiplicaci�n" << std::endl;
    std::cout << "Ingrese la probabilidad del evento 1: ";
    std::cin >> probabilidadEvento1;
    std::cout << "Ingrese la probabilidad del evento 2: ";
    std::cin >> probabilidadEvento2;
    double probabilidadMultiplicacion = calcularProbabilidadMultiplicacion(probabilidadEvento1, probabilidadEvento2);
    std::cout << "La probabilidad es: " << probabilidadMultiplicacion << std::endl << std::endl;

    // Determinar la dependencia o independencia de eventos
    std::cout << "Determinaci�n de la Dependencia o Independencia de Eventos" << std::endl;
    if (probabilidadEvento1 == 0 || probabilidadEvento2 == 0) {
        std::cout << "Los eventos son imposibles de ocurrir." << std::endl;
    }
    else if (probabilidadEvento1 == 1 && probabilidadEvento2 == 1) {
        std::cout << "Los eventos son seguros de ocurrir." << std::endl;
    }
    else if (probabilidadEvento1 == probabilidadEvento2) {
        std::cout << "Los eventos son independientes." << std::endl;
    }
    else {
        std::cout << "Los eventos son dependientes." << std::endl;
    }

    return 0;
}
