/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 7. Crea un programa que pida un número al usuario y muestra su valor negado (Si introduce 1 debe mostrar - 1 y si introduce - 1 debe mostrar 1).

#include <iostream> // biblioteca estàndar de C++ que proporciona funcionalidades de entrada i salida.
#include <math.h>

int main() 
{
	// Declaro las variables.
	int num;

	// Indico al usuario que introduzca un numero. 
	std::cout << "Introduzca un numero para mostrarte su valor negado" << std::endl;
	std::cout << "Numero : "; 
	std::cin >> num;

		// Imprimo las variable en la consola.
		if (num > 0)
		{
			std::cout << "Su numero " << num << " y su valor negado es : " << -num << std::endl;		// Si el valor esta en positivo se le mostrará en negativo. 
		}
		else if (num < 0)
		{
			std::cout << "Su numero " << num << " y su valor negado es : " << -num << std::endl;		// Si el valor esta en negativo se le mostrará en positivo.
		}
		else
		{
			std::cout << "No has introducido un numero!!!";    // Si no introduce un numero se le indicará el error.
		}

	return 0;
}
