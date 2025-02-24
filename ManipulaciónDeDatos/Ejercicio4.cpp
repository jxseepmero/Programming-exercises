/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 4. Pregúntale al usuario por su nombre, su edad y su comida favorita. A continuación muestra por pantalla los 3 datos en orden.

#include <iostream> // biblioteca estàndar de C++ que proporciona funcionalitats d'entrada i sortida.
#include <string>

int main() 
{
	// Declaro la varible string.
	std::string nombre, edad, comida;
	
	// Indico al usuario que introduzca sus datos y guardo los valores que introduce el usuario en las variables anteriormente declaradas. 
	std::cout << "Introduzca su nombre: "; 
	std::cin >> nombre;		

	std::cout << "Introduzca su edad: ";
	std::cin >> edad;

	std::cout << "Introduzca su comida favorita(sin espacios): ";
	std::cin >> comida;

	// Imprimo las variable en la consola.
	std::cout << "------SUS DATOS------\n";
	std::cout << "Su nombre: " << nombre << std::endl;		
	std::cout << "Su edad: " << edad << std::endl;
	std::cout << "Su comida: " << comida << std::endl;
	return 0;
}
