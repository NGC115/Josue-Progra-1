// P015 batalla pokemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib> // Necesario para utilizar rand()

int main() {
    // Datos del primer Pokémon (Pikachu)
    std::string pokemon1Nombre = "Pikachu";
    int pokemon1Nivel = 50;
    int pokemon1Vida = 100;

    // Datos del segundo Pokémon (Charizard)
    std::string pokemon2Nombre = "Charizard";
    int pokemon2Nivel = 50;
    int pokemon2Vida = 100;

    // Bucle de la batalla hasta que uno de los Pokémon se quede sin vida
    while (pokemon1Vida > 0 && pokemon2Vida > 0) {
        // Turno del primer Pokémon (Pikachu)
        std::cout << pokemon1Nombre << ", elige tu ataque:" << std::endl;
        std::cout << "1. Impactrueno" << std::endl;
        std::cout << "2. Rayo" << std::endl;
        std::cout << "3. Placaje" << std::endl;

        int opcion;
        std::cin >> opcion;

        int danio = 0;
        std::string ataque;

        switch (opcion) {
        case 1:
            danio = 10;
            ataque = "Impactrueno";
            break;
        case 2:
            danio = 15;
            ataque = "Rayo";
            break;
        case 3:
            danio = 5;
            ataque = "Placaje";
            break;
        default:
            std::cout << "Opción inválida. Se realizará un ataque aleatorio." << std::endl;
            danio = 7;
            ataque = "Ataque aleatorio";
            break;
        }

        std::cout << pokemon1Nombre << " ataca a " << pokemon2Nombre << " con " << ataque << "!" << std::endl;
        pokemon2Vida -= danio;
        if (pokemon2Vida < 0) {
            pokemon2Vida = 0;
        }
        std::cout << pokemon2Nombre << " pierde " << danio << " puntos de vida." << std::endl;
        std::cout << pokemon2Nombre << " tiene " << pokemon2Vida << " puntos de vida restantes." << std::endl;

        // Comprobar si el segundo Pokémon (Charizard) ha sido derrotado
        if (pokemon2Vida <= 0) {
            std::cout << pokemon2Nombre << " ha sido derrotado. ¡" << pokemon1Nombre << " gana la batalla!" << std::endl;
            break;
        }

        // Turno del segundo Pokémon (Charizard)
        int ataqueAleatorio = rand() % 3 + 1;
        danio = 0;
        ataque = "";

        switch (ataqueAleatorio) {
        case 1:
            danio = 10;
            ataque = "Lanzallamas";
            break;
        case 2:
            danio = 12;
            ataque = "Garra Dragón";
            break;
        case 3:
            danio = 7;
            ataque = "Cola de Hierro";
            break;
        }

        std::cout << pokemon2Nombre << " ataca a " << pokemon1Nombre << " con " << ataque << "!" << std::endl;
        pokemon1Vida -= danio;
        if (pokemon1Vida < 0) {
            pokemon1Vida = 0;
        }
        std::cout << pokemon1Nombre << " pierde " << danio << " puntos de vida." << std::endl;
        std::cout << pokemon1Nombre << " tiene " << pokemon1Vida << " puntos de vida restantes." << std::endl;

        // Comprobar si el primer Pokémon (Pikachu) ha sido derrotado
        if (pokemon1Vida <= 0) {
            std::cout << pokemon1Nombre << " ha sido derrotado. ¡" << pokemon2Nombre << " gana la batalla!" << std::endl;
            break;
        }
    }

    return 0;
}






