#include <iostream>
#include <string>


int main() {
	int area;
	int perimetro;
	int largo;
	int ancho; 

	std::cout << "Ingrese el largo: ";
	std::cin >> largo;

	std::cout << "Ingrese el ancho: ";
	std::cin >> ancho;

	perimetro = (largo * 2) + (ancho * 2);
	area = largo * ancho;

	std::cout << "El perimetro del cuadrado es: " << perimetro << std::endl;
	std::cout << "El area del cuadrado es: " << area << std::endl;

	return 0;
}