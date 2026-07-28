#include <iostream>
#include <string>

int main() {
	std::string nombre;
	int habitaciones;
	double precioNoche;

	std::cout << "Nombre del Hotel: ";
	std::getline(std::cin, nombre);

	std::cout << "Cantidad de habitaciones: ";
	std::cin >> habitaciones;

	std::cout << "Precio por noche: ";
	std::cin >> precioNoche;

	std::cout << "\n";

	std::cout << "========== HOTEL ==========\n";
	std::cout << "Hotel         : " << nombre << "\n";
	std::cout << "Habitaciones  : " << habitaciones << "\n";
	std::cout << "Precio/Noche  : RD$ " << precioNoche << "\n";
	std::cout << "===========================";
	return 0;
}