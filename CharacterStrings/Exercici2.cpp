// 2. Crea un programa que reciba un carácter y sea capaz de identificar si es una letra, un número u otra cosa

#include <iostream>
#include <string>

int main() {
	char caracter;                                                                                                                                                                                                //Declaro la variable.

	std::cout << "Introduce un caracter" << std::endl;                                                                                                                                                            //Indico al usuario que introduzca un caracter.
	std::cin >> caracter;
	std::cout << std::endl;

	if (caracter >= (char)48 && (char)caracter <= 57)                                                                                                                                                             //Condiciono que si el caracter introducido es igual al numero 48 al 57 de la tabla ASCII. Son numeros del 0 al 9.
	{
		std::cout << "El caracter introducido es un numero " << caracter;                                                                                                                                           //Si la condición se cumple se trata de un numero y se lo indicamos al usuario imprimiendo un mensaje.
	}
	else if (caracter >= (char)32 && caracter <= (char)47 || caracter >= (char)58 && caracter <= (char)64 || caracter >= (char)91 && caracter <= (char)96 || caracter >= (char)123 && caracter <= (char)255)      //Condiciono que si el caracter introducido es igual del numero 32 al 47, del 58 al 64, del 91 al 95 y del 123 al 255. Son caracteres especiales.
	{
		std::cout << "El caracter introducido es un caracter especial " << caracter;                                                                                                                                //Si la condición se cumple se trata de un caracter especial y se lo indicamos al usuario imprimiendo el mensaje.
	}
	else
	{
		std::cout << "El caracter es una letra" << caracter;                                                                                                                                                        //Si no, se tratará de una letra.
	}
  return 0;
}


//Programa anterior optimizado.

#include <iostream>
#include <string>

int main() {
	std::string caracter;                                                                              //He cambiado la variable char por una string.
	int contador = 0;                                                                                  //Añado una variable con la intención de contar el número de caracteres de la string.

	std::cout << "Introduce un caracter" << std::endl;
	std::cin >> caracter;
	std::cout << std::endl;

	for (int i = 0; i < caracter.length(); i++)                                                        //Añado un loop que contará el número de caracteres que hay en la string.
	{
		contador++;                                                                                      //El contador sumará uno por cada número que haya en la string.
	}
	if (contador == 1)                                                                                 //Condiciono que si el contador, que indica el número de caracteres en la string, es igual que uno quiere decir que el usuario solo ha introducido un caracter.
	{
		if (caracter[0] >= (char)48 && caracter[0] <= char(57))
		{
			std::cout << "El caracter introducido es un numero " << caracter;
		}
		else if (caracter[0] >= (char)32 && caracter[0] <= (char)47 || caracter[0] >= (char)58 && caracter[0] <= (char)64 || caracter[0] >= (char)91 && caracter[0] <= (char)96 || caracter[0] >= (char)123 && caracter[0] <= (char)255)
		{
			std::cout << "El caracter introducido es un caracter especial " << caracter;
		}
		else
		{
			std::cout << "El caracter es una letra, es la letra : " << caracter;
		}

	}
	else
	{
		std::cout << "ERROR: El string no puede ser más de un caracter";                                        //Si no, indicaremos con un mensaje de error, en la que le indicamos al usuario que no introduzca más de un caracter.
	}
	return 0;
}
