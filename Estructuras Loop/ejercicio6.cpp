/*
  6. Crea un programa que pida la edad y el año de nacimiento del usuario. El
  programa debe de mostrar cuántos años tenía en cada año desde que
  nació.
*/

#include <iostream>

int edad = 0;
int año = 0;
int resultado = 0;

int main() {

    std::cout << "Introduce tu edad" << std::endl;
    std::cin >> edad;
    std::cout << "Introduce tu año de nacimiento" << std::endl;
    std::cin >> año;

    for ( int i = 0; i <= edad + 1; i++) 
    {
        std::cout << año + i << " - " << i << std::endl;
    }

    return(0);
