/*-------------CALCULADORA--------------*/

#include <iostream>

float num1 = 0;
float num2 = 0;

void Suma() {
    float sumatori = num1 + num2;
    std::cout << "La suma de los numeros " << num1 << " + " << num2 << " es: " << sumatori << std::endl;
}

void restar() {
    float resta = num1 - num2;
    std::cout << "La suma de los numeros " << num1 << " - " << num2 << " es: " << resta << std::endl;
}

void Multiplicacion() {
    float multiplicar = num1 * num2;
    std::cout << "La multiplicacion de los numeros " << num1 << " * " << num2 << " es: " << multiplicar << std::endl;
}

void Division() {
    if (num2 != 0) {
        float division = num1 / num2;
        std::cout << "La división de los numeros " << num1 << " / " << num2 << " es: " << division << std::endl;
    }
    else {
        std::cout << "Error: No se puede dividir entre 0." << std::endl;
    }
}

int main() {
    int userInput = 0;

    std::cout << "Esto es una calculadora\n";
    std::cout << "Puedes hacer estas operaciones, indicame cual quieres hacer.\n";
    std::cout << "1) Suma\n";
    std::cout << "2) Resta\n";
    std::cout << "3) Multiplicar\n";
    std::cout << "4) Division\n";
    std::cout << "5) Salir\n";
    std::cin >> userInput;

    switch (userInput) {
    case 1: {
        std::cout << "Dame un numero: ";
        std::cin >> num1;
        std::cout << "Dame otro numero: ";
        std::cin >> num2;
        Suma();
    }
          break;
    case 2: {
        std::cout << "Dame un numero: ";
        std::cin >> num1;
        std::cout << "Dame otro numero: ";
        std::cin >> num2;
        restar();
    }
          break;
    case 3: {
        std::cout << "Dame un numero: ";
        std::cin >> num1;
        std::cout << "Dame otro numero: ";
        std::cin >> num2;
        Multiplicacion();
    }
          break;
    case 4: {
        std::cout << "Dame un numero: ";
        std::cin >> num1;
        std::cout << "Dame otro numero: ";
        std::cin >> num2;
        Division();
    }
          break;
    case 5: {
        std::cout << "Has salido\n";
    }
          break;
    default:
        std::cout << "Opción no válida.\n";
        break;
    }

    return 0;
}
