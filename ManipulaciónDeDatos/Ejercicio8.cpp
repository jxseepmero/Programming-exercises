/*==========INTRODUCCIÓ A LA PROGRAMACIÓ=========*/

// 8. Crea un programa que pida al usuario un número de 6 cifras y muestre en orden qué número equivale a las unidades, cual a las decenas, cual a las centenas, etcétera…

#include <iostream> // biblioteca estándar de C++ que proporciona funcionalidades de entrada y salida.

int main()
{
    // Declaro el arreglo para almacenar las cifras del número.
    int numeros[6];
    int num;

    // Indico al usuario que introduzca un número de 6 cifras.
    std::cout << "Introduzca un numero de 6 cifras y le indicare en orden el numero equivalente a las unidades." << std::endl;
    std::cout << "Numero: ";
    std::cin >> num;

    // Comprobamos que el número tenga exactamente 6 cifras.
    if (num < 100000 || num > 999999) {
        std::cout << "Por favor, ingrese un número de exactamente 6 cifras." << std::endl;
        return 1; // Sale del programa si el número no es de 6 cifras.
    }

    // Extraemos las cifras del número
    numeros[5] = num % 10; // Unidades
    numeros[4] = (num / 10) % 10; // Decenas
    numeros[3] = (num / 100) % 10; // Centenas
    numeros[2] = (num / 1000) % 10; // Miles
    numeros[1] = (num / 10000) % 10; // Decenas de mil
    numeros[0] = (num / 100000) % 10; // Centenas de mil

    // Imprimo las cifras en la consola
    std::cout << "Centena de mil: " << numeros[0] << std::endl;
    std::cout << "Decena de mil: " << numeros[1] << std::endl;
    std::cout << "Mil: " << numeros[2] << std::endl;
    std::cout << "Centena: " << numeros[3] << std::endl;
    std::cout << "Decena: " << numeros[4] << std::endl;
    std::cout << "Unidad: " << numeros[5] << std::endl;

    return 0;
}
