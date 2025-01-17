/*
  5. Crea un programa capaz de elevar un número a otro. El usuario añadirá la 
  base y el exponente y seguidamente el programa mostrará el resultado.
*/

#include <iostream>

int base = 0;
int exponente = 0;
int resultado = 1;

int main() {
    std::cout << "Introduce un numero base" << std::endl;
    std::cin >> base;
    std::cout << "Dame un exponente para elevarlo a la base" << std::endl;
    std::cin >> exponente;

    for ( int i = 0; i < exponente; i++) 
    {
        resultado *= base;
    }

    std::cout << "El resultado del numero " << base << " elevado a " << exponente << " es igual a: " << resultado;

    return(0);
}
