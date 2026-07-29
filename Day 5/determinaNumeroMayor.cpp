/*scriba un programa que lea dos numeros y determine cual de ellos es el mayor.*/
#include <iostream>
int main() {
	int numero1, numero2;

	std::cout << "Ingresa el primer numero: "; std::cin >> numero1;
	std::cout << "Ingresa el segundo numero: "; std::cin >> numero2;

	if (numero1 > numero2) {
		std::cout << "El numero mayor es: " << numero1 << std::endl;
	}
	else{
		std::cout << "El numero mayor es: " << numero2 << std::endl;
	}
return 0;
}