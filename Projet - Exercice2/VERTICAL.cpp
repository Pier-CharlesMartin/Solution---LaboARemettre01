// But : Demander à l'utilisateur de donner un nombre à 5 chiffres,
//       le vérifie et il l'affiche verticalement. Si le nombre
//       n'a pas 5 chiffre, il le refuse.
// Auteur : Pier-Charles Martin
// Date : 2020-09-12

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");

    string nb;

    std::cout << "Entrez un nombre à 5 chiffres: ";
    std::cin >> nb;

    if (nb.length() == 5 ) 
    {
        for (int i = 0; i < nb.length(); i++) 
        {
            std::cout << nb.at(i) << endl;
        }
    }
    else
    {
        std::cout << "Ce nombre ne contient pas 5 chiffres." << endl;
    }

}