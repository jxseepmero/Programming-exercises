/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 3. Pregunta por pantalla el nombre del usuario y luego le saludas mencionando su nombre.


#include <iostream> // biblioteca estàndar de C++ que proporciona funcionalitats d'entrada i sortida.
#include <string> 

int main() 
{
	std::string nombre;		// Declaro la varible string.
	std::cout << "Introduzca su nombre:"; // Indico al usuario que introduzca su nombre
	std::cin >> nombre;		// Guardo el valor que introduce el usuario en la variable anteriormente declarada.

	std::cout << "Saludos cordiales " << nombre << " !!";		// Imprimo la variable en la consola.
	return 0;
}
