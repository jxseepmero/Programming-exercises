//Programa que con una letra que pedimos al usuario, la pase a minúscula a mayúscula o viceversa.

#include <iostream>

void main() {

	char caracter;
	std::cout << "dame una letra" << std::endl;                                              //Pedimos la letra
	std::cin >> caracter;                                                                    //Guardamos la letra en una variable char.

	if (caracter >= 65 && caracter <= 90)                                                    //Si el caracter es desde el número 65 hasta el número 90 de la tabla ASCII que representan las letras en mayúsculas.
	{
		char minus = caracter + 32;                                                            //En la variable minus representare las minusculas en la que dependiendo del caracter del usuario le sumo 32 para transformarlo en minuscula.
		std::cout << "Tu letra: " << caracter << " transformado a : " << (char)minus;          //Imprimo la transformación.
	}
	else if (caracter >= 97 && caracter <= 122)                                              //Si el caracter es desde el número 97 a 122 de la tabla ASCII que representan las minúsculas.           
	{
		char mayus = caracter - 32;                                                            //Hago lo mismo que lo anterior pero de manera que resto -32 para transformar mayúsculas a minúsculas.
		std::cout << "Tu letra: " << caracter << " transformado a : " << (char)mayus;          //Imprimo la transformación.
	}
	else
	{
		std::cout << "El caracter introducido no es una letra !!!";
	}
}
