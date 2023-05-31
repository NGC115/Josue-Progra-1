// EnumStruct.cpp : 
// 
//syntaxis de objeto
//ENUM - STRUCT

#include <iostream>
#include <string>
#include <locale.h>
#include <Windows.h>

struct juego_mesa
{
    std::string nombre;
    std::string autor;
    int num_jug=0;
}Guardados[10];

enum Armas { shorty = 100, knife, shutgun, sniper };
enum Charizard { Envite_igneo = 150,vuelo = 80,Terremoto=100, lanzallamas=100 };

int main()
{
    
    juego_mesa Guardados[10];
    Guardados[0].nombre = "Dodos Riding Dinos";
    Guardados[0].autor = "caravana Gamelab";
    Guardados[0].num_jug = 6;
    std::cout << Guardados[0].nombre << std::endl;
    std::cout << Guardados[0].num_jug << std::endl;
    std::cout << Guardados[0].autor << std::endl;
    
    Armas Arma1 = shorty;
    std::cout << Arma1;
    Charizard Ataque1 = Envite_igneo;
    Charizard Ataque2 = vuelo;
    Charizard Ataque3 = Terremoto;
    Charizard Ataque4 = lanzallamas;
    std::cout << Ataque1 << std::endl;
    std::cout << Ataque2 << std::endl;
    std::cout << Ataque3 << std::endl;
    std::cout << Ataque4 << std::endl;
}


