// 4. Crear un programa que pida una frase al usuario y cuente la cantidad de letras que hay

#include<iostream>
#include<string>

int main() {
    std::string frase;                                                                  //Declaro la variable.

    int contador = 0;                                                                   //Declaro un contador igual a cero para que empieze desde 0.

    std::cout << "Dame una frase: ";                                                    //Indico al usuario que introduzca una frase
    std::getline(std::cin, frase);                                                      //Guardo la frase que en la variable.

    for (int i = 0; i < frase.length(); i++)                                            //Hago un loop para indicar el numero de palabras de la frase que introduzca el usuario.
    {
        contador++;                                                                     //Suma el contador por cada palabra que contenga el valor de la variable.

            if (frase[i] == ' ')                                                        //Condiciono que si la frase contiene espacios que reste el contador.
            {
                contador--;
            }
    }
    std::cout << "Hay " << contador << " escritas en esta frase.";                      //Imprimo un mensaje con el resultado del numero total de caracteres de la frase del usuario. 

    return 0;
}
