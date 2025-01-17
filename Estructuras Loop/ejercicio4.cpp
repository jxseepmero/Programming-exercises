/*
  4. Crea un programa que pida dos números al usuario (origen y final). El
  programa irá recorriendo los números y de forma alternativa irá sumando y
  multiplicandolos entre ellos. Al final debe mostrar el resultado del cálculo.
*/

#include <iostream>

int origen = 0;
int final = 0;
int resultado = 0;

int main() {

    std::cout << "Dame un numero origen" << std::endl;  
    std::cin >> origen;
    std::cout << "Dame un numero final" << std::endl;  
    std::cin >> final;

    for ( int i = 0; i <= final - origen + 1; i++)  
    {
        if (i % 2 == 0) 
        {
            std::cout << "Suma" << std::endl;
            std::cout << origen << "+" << i << " : " << resultado << "\n" << std::endl;
            resultado += origen + i;
        }
        else 
        {
            std::cout << "Multiplicació" << std::endl;
            std::cout << origen << "*" << i << " : " << resultado << "\n" << std::endl;
            resultado *= origen + i;
        }
    }

    std::cout << "El resultado total es: " << resultado;


    return(0);
}
