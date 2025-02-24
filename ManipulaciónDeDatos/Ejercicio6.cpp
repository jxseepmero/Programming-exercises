/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 6. Crea un programa que reciba dos números y ejecute las operaciones matemáticas(suma, resta, multiplicación, división, módulo) mostrando su resultado por pantalla.


#include <iostream> // biblioteca estàndar de C++ que proporciona funcionalitats d'entrada i sortida.
#include <math.h>

int main() 
{
	// Declaro las variables.
	int num1 = 0;
	int num2 = 0;
	
	// Indico al usuario que introduzca dos numeros y guardo los valores que introduce el usuario en las variables anteriormente declaradas. 
	std::cout << "Introduzca dos numeros para realizar operaciones matematicas" << std::endl;
	std::cout << "Numero 1: "; 
	std::cin >> num1;

	std::cout << "Numero 2: ";
	std::cin >> num2;



	// Imprimo las variable en la consola.
	std::cout << "La suma de " << num1 << " + " << num2 << " es igual a: " << num1 + num2 << std::endl;
	std::cout << "La resta de " << num1 << " - " << num2 << " es igual a: " << num1 - num2 << std::endl;
	std::cout << "La multiplicacion de " << num1 << " * " << num2 << " es igual a: " << num1 * num2 << std::endl;
	std::cout << "La division de " << num1 << " / " << num2 << " es igual a: " << num1 / num2 << std::endl;
	/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 6. Crea un programa que reciba dos números y ejecute las operaciones matemáticas(suma, resta, multiplicación, división, módulo) mostrando su resultado por pantalla.


#include <iostream> // biblioteca estàndar de C++ que proporciona funcionalitats d'entrada i sortida.
#include <string>
#include <math.h>

int main() 
{
	// Declaro las variables.
	int num1 = 0;
	int num2 = 0;
	
	// Indico al usuario que introduzca dos numeros y guardo los valores que introduce el usuario en las variables anteriormente declaradas. 
	std::cout << "Introduzca dos numeros para realizar operaciones matematicas" << std::endl;
	std::cout << "Numero 1: "; 
	std::cin >> num1;

	std::cout << "Numero 2: ";
	std::cin >> num2;



	// Imprimo las variable en la consola.
	std::cout << "La suma de " << num1 << " + " << num2 << " es igual a: " << num1 + num2 << std::endl;
	std::cout << "La resta de " << num1 << " - " << num2 << " es igual a: " << num1 - num2 << std::endl;
	std::cout << "La multiplicacion de " << num1 << " * " << num2 << " es igual a: " << num1 * num2 << std::endl;
	std::cout << "La division de " << num1 << " / " << num2 << " es igual a: " << num1 / num2 << std::endl;
	std::cout << "El modulo de " << num1 << " % " << num2 << " es igual a: " << num1 % num2 << std::endl;
	return 0;
}
	return 0;
}
