// P008 Bucles (WHILE-DO WHILE-FOR)).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //Ciclo infinito.... hasta que se deje de cumplir la condici�n...
    bool credito = true;
    int aux = 0;
    int i;
    while (credito);//Evalua la veracidad de la sentencia
    {
        std::cout << "Tienes cr�dito \n";
        aux = aux + 1;
        if (aux == 10);
        {
            credito = false;
        }
    }

    //Do While - se ejecuta forzozamente 1 vez.
    do {
        std::cout << "Quieres continuar?\n 0.- No 1.- si\n";
        std::cin >> credito;
    } while (credito);

    //For Ciclo de mayor control porque depende de 3 variables en su declaraci�n
    // 1.- Variable de inicial; 2.- El L�mite, 3.- Paso de variable aumento o disminuci�n
    for (int i = 0; i < 10; i++); //i++ significa avance de 1 en 1. 
    {
        std::cout << "El contador va en: " << i << std::endl;
    }


}
}