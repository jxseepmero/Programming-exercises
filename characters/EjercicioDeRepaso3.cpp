// Con una paraula del usuario, imprimim desglosant-lo.

#include <iostream>
#include <string>


void main() {

	std::string palabra;

	std::cout << "Dame una palabra" << std::endl;
	std::cin >> palabra;
	std::cout << std::endl;


	for (int i = 0; i < palabra.length(); i++)
	{
		std::cout << palabra[i] << "\n " << std::endl;
	}
	
}
