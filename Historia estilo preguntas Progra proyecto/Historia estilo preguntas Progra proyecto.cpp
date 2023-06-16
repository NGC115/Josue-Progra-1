// Historia estilo preguntas Progra proyecto.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    std::cout << "¡Bienvenido a la historia!\n";
    std::cout << "Moriste y tienes que buscar tu camino hacia el cielo.\n";
    std::cout << "Te encuentras en un camino dividido en dos colores.\n";

    int decision;
    std::cout << "Elige tu camino:\n";
    std::cout << "1. Color rojo\n";
    std::cout << "2. Color blanco\n";
    std::cin >> decision;

    if (decision == 1) {
        std::cout << "Has elegido el sendero izquierdo.\n";
        std::cout << "Te adentras en el bosque y encuentras un río.\n";

        std::cout << "¿Qué haces?\n";
        std::cout << "1. Cruzar el río nadando.\n";
        std::cout << "2. Buscar un puente cercano.\n";
        std::cin >> decision;

        if (decision == 1) {
            std::cout << "Decidiste cruzar el río nadando.\n";
            std::cout << "Lograste cruzar de manera segura y continúas tu camino.\n";
        }
        else if (decision == 2) {
            std::cout << "Decidiste buscar un puente cercano.\n";
            std::cout << "Encuentras un puente colgante, pero al cruzarlo se rompe y caes al río.\n";
            std::cout << "Has perdido y la historia termina aquí.\n";
            return 0;
        }
        else {
            std::cout << "Decisión inválida. La historia termina aquí.\n";
            return 0;
        }
    }
    else if (decision == 2) {
        std::cout << "Has elegido el sendero derecho.\n";
        std::cout << "Te encuentras con una cueva oscura.\n";

        std::cout << "¿Qué haces?\n";
        std::cout << "1. Entrar a la cueva.\n";
        std::cout << "2. Evitar la cueva y seguir por el sendero.\n";
        std::cin >> decision;

        if (decision == 1) {
            std::cout << "Decidiste entrar a la cueva.\n";
            std::cout << "Dentro de la cueva encuentras una linterna y un mapa del tesoro.\n";
            std::cout << "Continúas tu camino con la linterna y el mapa.\n";
        }
        else if (decision == 2) {
            std::cout << "Decidiste evitar la cueva.\n";
            std::cout << "Sigues por el sendero y te encuentras con una trampa oculta.\n";
            std::cout << "Has perdido y la historia termina aquí.\n";
            return 0;
        }
        else {
            std::cout << "Decisión inválida. La historia termina aquí.\n";
            return 0;
        }
    }
    else {
        std::cout << "Decisión inválida. La historia termina aquí.\n";
        return 0;
    }

    std::cout << "¡Felicidades! Has encontrado el tesoro y completado la historia.\n";

    return 0;
}
