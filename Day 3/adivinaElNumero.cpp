#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	std::srand(std::time(nullptr));

	int secreto = std::rand() % 100 + 1;
	int intentos_restantes = 7;
	int intentos = 0;
	bool gano = false;

	std::cout << "----> Adivina el numero <----\n";

	std::cout << "\nHe pensado en un numero entre 1 y 100\n";
	std::cout << "Tienes: " << intentos_restantes << " Intentos. !Suerte!\n";

	while (intentos_restantes > 0) {

		int numero;

		std::cout << "Ingresa un numero: "; std::cin >> numero;

		//validamos que no ingrese un dato strign
		if (std::cin.fail()) {
			std::cout << "\n[ Debe ingresar un numero. ]\n";

			std::cin.clear();
			std::cin.ignore(1000, '\n');
			continue;
		}

		//validacion de rango numerico
		if (numero >= 1 && numero <= 100) {
			intentos++;

			if (numero == secreto) {
				std::cout << "!Ganaste!, Adivinaste el numero secreto.\n";

				if (intentos == 1) {
					std::cout << "\n[ El Usuario utilizo " << intentos << " intento ]\n";
				}

				else {
					std::cout << "\n[ El Usuario utilizo " << intentos << " intentos ]\n";
				}

				gano = true;
				break;
			}

			else if (numero < secreto) {
				std::cout << "El numero secreto es mayor.\n";
			}

			else {
				std::cout << "El numero secreto es menor.\n";
			}

			intentos_restantes--;
			std::cout << "Te quedan " << intentos_restantes << " intentos\n";
		}
		else {
			std::cout << "\n[ El numero debe de estar entre 1 - 100. ]\n";
		}

	}

	if (!gano) {
		std::cout << "Sin intentos. el numero secreto era: " << secreto << std::endl;
		std::cout << "\n[ Vuelve pronto perdedor. ]\n";
		std::cout << "\n[ El usuario utilizo " << intentos << " intentos. ]\n";
	}
	return 0;
}
