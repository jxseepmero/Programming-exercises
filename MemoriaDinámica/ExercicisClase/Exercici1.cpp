#include <iostream>
#include <list>

void main()
{
	int numinsert;
	int numpos;

	std::list<int>valores;
	std::list<int>::iterator iterator;

	valores.push_back(3);
	valores.push_back(7);
	valores.push_back(4);
	valores.push_back(2);
	valores.push_back(1);


	do {

		std::cout << "Dame un numero que quieres insertar : ";
		std::cin >> numinsert;

		if (numinsert == -1) break;
		
		bool validPosition = true;
		
		do 
		{

			std::cout << "Dame un numero de posicion desde el 0 al " << valores.size() << " : ";
			std::cin >> numpos;

			if (numpos >= 0 && numpos <= valores.size())
				{
					validPosition = true;
				}
			else
			{
				std::cout << "Has puesto un numero superior al indicado. Intentalo de nuevo!";
				continue;
			}

		} while (!validPosition);


		iterator = valores.begin(); //Posicion 0 {3}
		std::advance(iterator, numpos); //Posicion que ingresa el usuario.
		valores.insert(iterator, numinsert);

	} while (true);

	for (iterator = valores.begin(); iterator != valores.end(); iterator = std::next(iterator))
	{
		std::cout << *iterator << " ";
	}

	int posicionConsulta;

	std::cout << "\n Ingrese una posicion para consultar el valor: " << std::endl;
	std::cin >> posicionConsulta;

	if (posicionConsulta >= 0 && posicionConsulta < valores.size()) {
		iterator = valores.begin();
		std::advance(iterator, posicionConsulta);

		std::cout << "El valor en la posicion es: " << *iterator;
	}
	else {
		std::cout << "Posicion no valida." << std::endl; 
	}
}
