// P003 Menor Mayorr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <locale.h>
#include <string>

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	bool pregunta = true;
	int valor = 0;
	int valor2 = 0;
	std::cout << "hola porfavor ingresa un valor\n";
	std::cin >> valor;
	std::cout << "hola ingresa otro valor\n";
	std::cin >> valor2;
	if (valor == valor2)
	{
		std::cout << "son identicos\n";
	}
	else if (valor < valor2)
	{
		std::cout << valor << "es mayor que\n" << valor2 << std::endl;
	}
	else if (valor > valor2)
	{
		std::cout << valor << "es menor que\n" << valor2 << std::endl;
	}

}