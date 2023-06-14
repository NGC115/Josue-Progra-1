// P014 Bucles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <thread>


int main()
{
	int opc = 0;

	std::cout << "hola porfavor elija entre estas opciones (1) 1000 a 0 con 3 ciclos (2) Contar hasta 100 de manera lenta (3) contar hasta 10x10 (4) 10 en 10";
	std::cin >> opc;

	switch (opc)
	{
	case 1:

		for (int i = 1000; i >= 0; i--) {
			std::cout << i << " ";
		}
		break;
	case 2:
		for (int i = 0; i <= 100; i++) {
			std::cout << i << " ";
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
		}
		break;
	case 3:
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				std::cout << (i * j) << " ";
			}
		}
		break;

	case 4:
		for (int i = 0; i <= 100; i += 10) {
			std::cout << i << " ";
		}

		break;
	default:
		break;
	}
	return 0;
}
