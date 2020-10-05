//But:Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom.
//L’utilisateur a un maximum de 5 chances.Le programme vérifie que l’utilisateur a bien entré un nombre entre 0 et
//100 et lui indique s’il gagne ou dans le cas contraire lui indique le nombre d’essais restant et lui redemande un
//nombre.
//Défi : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition
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

	int iRandom = 54; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	// Déclaration des variables
	int nb1, nb2, nb3, nb4, nb5;


	std::cout << "Veuillez entrer le premier nombre : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer le deuxième nombre: ";
	std::cin >> nb2;
	std::cout << "Veuillez entrer le troisième nombre : ";
	std::cin >> nb3;
	std::cout << "Veuillez entrer le quatrième nombre : ";
	std::cin >> nb4;
	std::cout << "Veuillez entrer le cinquième nombre : ";
	std::cin >> nb5;

	if (iRandom < 100);
	{
		std::cout << " Bravo vous avez réussi à trouver le nombre ";
		std::cin >> iRandom;

	}
	else
	{
		std::cout << " Erreur nombre doit être plus petit que 100 ";
    }

	

    return 0;
}
