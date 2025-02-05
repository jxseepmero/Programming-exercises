// 3. Haz un programa que pida al usuario 3 palabras y luego las muestre en pantalla separado por comas.

#include<iostream>
#include<string>

int main() {
    std::string word1, word2, word3;                              //Declaro las variables para guardar strings.
  
    std::cout << "Dame una primera palabra: ";                    //Le indico al usuario que introduzca tres palabras y cada una a una variable.
    std::cin >> word1;

    std::cout << "Dame una segunda palabra: ";
    std::cin >> word2;

    std::cout << "Dame una tercera palabra: ";
    std::cin >> word3;
  
    std::string word[] = { word1, word2, word3 };                 //Hago un array donde guardaré las strings del usuario.

    for (int i = 0; i < 3; i++) {                                 //En un bucle imprimo cada string del array.
        std::cout << word[i];
        if (i < 2)                                                //Condicio que cuando se imprima una string ponga un coma hasta la segunda string.
        {
            std::cout << " , ";
        }
    }

    return 0;
}
