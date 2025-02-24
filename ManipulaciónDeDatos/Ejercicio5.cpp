/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 5. Genera un programa que obtenga el siguiente resultado.

#include <iostream> // biblioteca estàndar de C++ que proporciona funcionalitats d'entrada i sortida.
#include <string>

int main() 
{
	// Declaro la varible string.
	std::string nombre, calle;
	int edad, numcalle;
	
	// Indico al usuario que introduzca sus datos y guardo los valores que introduce el usuario en las variables anteriormente declaradas. 
	std::cout << "Dime tu nombre" << std::endl; 
	std::cin >> nombre;

	std::cout << "Dime tu edad" << std::endl;
	std::cin >> edad;

	std::cout << "Dime tu calle(sin espacios)" << std::endl;
	std::cin >> calle;

	std::cout << "Dime numero de calle" << std::endl;
	std::cin >> numcalle;

	// Imprimo las variable en la consola.
	std::cout << "===============\n";
	std::cout << "   SUS DATOS\n";
	std::cout << "===============\n";


	std::cout << "Su nombre es: " << nombre << std::endl;		
	std::cout << "Su edad es: " << edad << std::endl;
	std::cout << "Usted vive en: " << calle << " " << numcalle << std::endl;
	
	return 0;
}
