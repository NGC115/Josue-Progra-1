// Consultorio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

int main()
{

    bool pregunta = true;
    int peso = 0;
    int edad = 0;
    float estatura, imc;

    std::string nombre;
    std::cout << "Consultorio medico:\n";
    std::cout << "hola paciente como te llamas? :\n";
    getline(std::cin, nombre);
    std::cout << "hola paciente que edad tienes:\n" << edad << std::endl;
    std::cin >> edad;
    std::cout << "Introduce tu Peso (Kg):\n";
    std::cin >> peso;
    std::cout << "Introduce tu Estatura  (Mts):\n";
    std::cin >> estatura;
    imc = peso / (estatura * estatura);
    std::cout << "Tu IMC es de :   " << imc << std::endl;

    std::cout << "cual es tu temperatura\n" << std::endl;
    int temp;
    std::cin >> temp;
    if (temp == 36)
    {
        std::cout << "estas bien\n" << std::endl;
    }
    else if (temp == 37)
    {
        std::cout << "tienes fiebre\n" << std::endl;
    }

    std::cout << "te sientes bien?\n" << std::endl;
    char fiebre;
    std::cin >> fiebre;
    if (fiebre == 's')
    {
        std::cout << "que bueno que te sientes bien\n" << std::endl;
    }
    else if (fiebre == 'n')
    {
        std::cout << "te sientes mal ve a un medico\n" << std::endl;
    }
    
}


