//But:Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom.
//L�utilisateur a un maximum de 5 chances.Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
//100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un
//nombre.
//D�fi : Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition
//que l'utilisateur a faite.

//Auteur: Ali Chamseddine
//Date:2020-10-04

#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");

	int iRandom = 54; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	// D�claration des variables
	int nb1, nb2, nb3, nb4, nb5;


	std::cout << "Veuillez entrer le premier nombre : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer le deuxi�me nombre: ";
	std::cin >> nb2;
	std::cout << "Veuillez entrer le troisi�me nombre : ";
	std::cin >> nb3;
	std::cout << "Veuillez entrer le quatri�me nombre : ";
	std::cin >> nb4;
	std::cout << "Veuillez entrer le cinqui�me nombre : ";
	std::cin >> nb5;

	if (iRandom < 100);
	{
		std::cout << " Bravo vous avez r�ussi � trouver le nombre ";
		std::cin >> iRandom;

	}
	else
	{
		std::cout << " Erreur nombre doit �tre plus petit que 100 ";
    }

	

    return 0;
}
