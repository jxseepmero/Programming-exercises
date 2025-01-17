/*
  7. Crea un programa que pida dos números al usuario. El primero será la
  cantidad de números a mostrar y el segundo los saltos entre números. El
  programa empezando por 0 mostrará tantos números como haya pedido el
  usuario pero saltando entre número y número la cantidad que haya indicado
  al usuario.
*/

#include <iostream>

int cantidad = 0;
int saltos = 0;
int num = 0;

int main() {

    std::cout << "Introduce una cantidad de numeros" << std::endl;
    std::cin >> cantidad;
    std::cout << "Introduce un numero de saltos de numero" << std::endl;
    std::cin >> saltos;

    for ( int i = 0; i < cantidad + 1; i++) 
    {
        if (i % saltos == 0)
        {
            std::cout << num + i;
        }
        else
        {
            std::cout << std::endl;
        }
    }

    return(0);
}
