#include <iostream>

float num1 = 0;
float num2 = 0;
float resultat = 0;

void main() {

	std::cout << "dame un numero decimal" << std::endl;
	std::cin >> num1;
	std::cout << "dame otro numero decimal" << std::endl;
	std::cin >> num2;

	resultat = num1 + num2 + 0.5f;

	std::cout << "El resultado de la suma es : " << (int) resultat;
