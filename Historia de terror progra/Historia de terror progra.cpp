// Historia de terror progra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    std::cout << "Bienvenido a la historia interactiva de terror." << std::endl;

    char eleccion;

    std::cout << "Estás caminando por un oscuro bosque en medio de la noche. De repente, escuchas un ruido escalofriante." << std::endl;
    std::cout << "¿Decides investigar el ruido (I) o seguir caminando (S)? ";
    std::cin >> eleccion;

    if (eleccion == 'I') {
        std::cout << "Decides investigar el ruido." << std::endl;
        std::cout << "Te acercas sigilosamente hacia el origen del ruido y encuentras una vieja mansión abandonada." << std::endl;
        std::cout << "¿Decides entrar a la mansión (E) o seguir caminando (S)? ";
        std::cin >> eleccion;

        if (eleccion == 'E') {
            std::cout << "Entras a la mansión y te encuentras con un pasillo oscuro y tenebroso." << std::endl;
            std::cout << "Al final del pasillo, ves una puerta entreabierta y escuchas risas siniestras." << std::endl;
            std::cout << "¿Decides abrir la puerta (A) o retroceder y salir de la mansión (R)? ";
            std::cin >> eleccion;

            if (eleccion == 'A') {
                std::cout << "Abres la puerta lentamente y te encuentras con un grupo de fantasmas que te arrastran hacia la oscuridad. Fin de la historia." << std::endl;
            }
            else if (eleccion == 'R') {
                std::cout << "Decides retroceder y salir de la mansión." << std::endl;
                std::cout << "Mientras te alejas, escuchas susurros inquietantes, pero logras escapar a salvo del peligro." << std::endl;
                std::cout << "Sales del bosque y te sientes aliviado. Has sobrevivido." << std::endl;
            }
            else {
                std::cout << "Elección inválida. Fin de la historia." << std::endl;
            }

        }
        else if (eleccion == 'S') {
            std::cout << "Decides seguir caminando en lugar de entrar a la mansión." << std::endl;
            std::cout << "El ruido escalofriante se hace más fuerte y sientes una presencia maligna acechándote." << std::endl;
            std::cout << "Corres desesperadamente, pero tropiezas y caes en una trampa mortal. Fin de la historia." << std::endl;
        }
        else {
            std::cout << "Elección inválida. Fin de la historia." << std::endl;
        }

    }
    else if (eleccion == 'S') {
        std::cout << "Decides seguir caminando en lugar de investigar el ruido." << std::endl;
        std::cout << "La oscuridad del bosque se vuelve aún más densa y comienzas a sentir una presencia aterradora." << std::endl;
        std::cout << "¿Decides encender una linterna (L) o continuar sin luz (C)? ";
        std::cin >> eleccion;

        if (eleccion == 'L') {
            std::cout << "Enciendes la linterna y su luz tenue revela sombras espeluznantes a tu alrededor." << std::endl;
            std::cout << "Sigues caminando, pero tropiezas con algo y caes en un foso oscuro. Fin de la historia." << std::endl;
        }
        else if (eleccion == 'C') {
            std::cout << "Decides continuar sin luz, confiando en tus instintos." << std::endl;
            std::cout << "De repente, una figura siniestra aparece frente a ti. ¿Huyes (H) o te quedas paralizado (P)? ";
            std::cin >> eleccion;

            if (eleccion == 'H') {
                std::cout << "Sales corriendo desesperadamente, pero la figura te alcanza y desapareces en la oscuridad. Fin de la historia." << std::endl;
            }
            else if (eleccion == 'P') {
                std::cout << "Te quedas paralizado por el miedo y la figura se acerca lentamente." << std::endl;
                std::cout << "Cuando creías que era el fin, la figura se desvanece y escapas ileso. Logras salir del bosque y te sientes aliviado. Has sobrevivido." << std::endl;
            }
            else {
                std::cout << "Elección inválida. Fin de la historia." << std::endl;
            }

        }
        else {
            std::cout << "Elección inválida. Fin de la historia." << std::endl;
        }

    }
    else {
        std::cout << "Elección inválida. Fin de la historia." << std::endl;
    }

    return 0;
}