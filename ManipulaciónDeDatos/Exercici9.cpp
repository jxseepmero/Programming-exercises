// 9. Crea un programa que pida al usuario el lado de un cuadrado y con ello calcule su área.

#include<iostream>
#include<string>
#include <math.h>
#define UNIDADES 6

int main() {

    std::string magnitud;
    float lado = 0;
    float area = 0;

    std::cout << "Introduce el lado de un cuadrado para calcular su area: ";
    std::cin >> lado;
    std::cout << "Que unidad de medida es (pueden ser abreviaturas)? ";
    std::cin >> magnitud;
    std::cout << "Ha introducido " << lado << " " << magnitud << std::endl; 

    area = lado * lado; 

    std::cout << "El area del cuadrado es: " << area << " " << magnitud << "^2";
    return 0;
}
