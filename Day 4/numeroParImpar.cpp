/*Raliza un programa que lea un valor y determine si se trata de un numero par o impar*/
#include <iostream>
int main() {
	int numero;

	std::cout << "Ingresa un numero: "; std::cin >> numero;

	if (numero % 2 == 0) {
		std::cout << "El numero: " << numero << ", es par." << std::endl;
	}
	else {
		std::cout << "El numero: " << numero << ", es impar." << std::endl;
	}
	return 0;
}
