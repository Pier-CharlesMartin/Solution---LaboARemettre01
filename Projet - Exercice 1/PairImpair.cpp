// But : Demander un nombre à l'utilisateur et le programme regarde
//		 si le nombre est pair ou impair
// Auteur : Pier-Charles Martin
// Date : 2020-09-12

#include <iostream>
using namespace std;

void main()
{
	int nb;

	std::cout << "Entrez un nombre: ";
	std::cin >> nb;

	if (nb % 2 == 0) 
	{
		std::cout << nb << " est un nombre pair " << endl;
	}
	else 
	{
		std::cout << nb << " est un nombre impair " << endl;
	}

	
	/* Plan de tests
	nb			résultat escompé
	2			pair
	10			pair
	11			impair
	123			impair
	1054		pair
	
	*/

}