// 1. Crea un programa que identifique si una palabra empieza por mayúscula o minúscula.

#include <iostream>
#include <string>


int main() {
	
	std::string palabra;                                                                                                          //Declaro la varible
  
	std::cout << "Introduce una palabra" << std::endl;                                                                            //Le indico al usuario que introduzca una palabra
	std::cin >> palabra;                                                                                                          //Guardo en la variable el valor introducido.
	std::cout << std::endl;

	if (palabra[0] >= (char)65 && palabra[0] <= (char)90)                                                                         //Condiciono que si la palabra empieza por mayúscula.
	{
		std::cout << "La palabra introducida empieza por mayuscula";                                                                //Si cumple la condición, imprime el mensaje.
	}
	else if (palabra[0] >= (char)97 && palabra[0] <= (char)122)                                                                   //Condiciono que si la palabra empieza por minúscula
	{
		std::cout << "La palabra introducida empieza por minuscula";                                                                //Si cumple la condición, imprime el mensaje.
	}
	else
	{
		std::cout << "Tu palabra contiene o empieza con caracteres especiales, o no has introducido una palabra con letras";        //Si no, le indico los posible casos que han pasado para que no detecte la mayúscula.
	}
	
	
	return 0;
}

//EXTRA: Programa que identifique si tu palabra contiene una mayúscula a principio, a final o entremedio.

#include <iostream>
#include <string>

int main() {

	std::string palabra;                                                                  //Declaro la variable.

	std::cout << "Dame una palabra" << std::endl;                                         //Le indico al usuario que introduzca una palabra.
	std::cin >> palabra;                                                                  //Guardo el valor introducido en la variable.
	std::cout << std::endl;


	for (int i = 0; i < palabra.length(); i++)                                            //Desgloso todas las palabras del string.
	{
		if (palabra[i] >= (char)65 && palabra[i] <= (char)90)                               //Condiciono que si la palabra contiene una letra del numero 65 al 90. Son los números de las mayúsculas de la tabla ASCII.
		{
			std::cout << "Tu palabra contienen una mayúscula";                                //Si lo detecta que imprima que el mensaje escrito.
			break;                                                                            //Hago que se detenga el loop en el momento que detecte la mayuscula.
		}
		else
		{
			std::cout << "La palabra introducida no tiene niguna mayúscula." << std::endl;    //Si no, que imprima el siguiente mensaje.
			break;
		}
	}
return 0;
}
