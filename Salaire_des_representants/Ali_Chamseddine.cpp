//But: Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les
//repr�sentants re�oivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
//repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
//5000$, soit un total de 625 $.
//D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.

//Auteur: Ali Chamseddine
//Date: 2020-10-04

   //Plan de test 
/* 
    vend de produit chimique           semaine           salaire              total
	       5000$                         1                250$+ 7,5%           625$
		   10,000$                        2               250$+ 7,5%           1,250$
		   20,000$                       3                250$+ 7,5%           2,250$   
		   30,000$                       4                250$+ 7,5%           3,250$   
		   40,000$                       5                250$+ 7,5%           4,250$    

*/

#include <iostream>
using namespace std;

int main()
 {
	   setlocale(LC_ALL, "");

	// Premi�re lecture
	// declaration de variables
	   int vend=5000;// Nombre de ventede produit chimique
	   int nbsemaine = 250;// Nombre de semaine
	   int surplus;// Le pourcentage qui est ajouter au vente(7.5%)
	   float salaire;
	   int profit;
	   
	   
	  

	   //Deuxi�me lecture / demander le nb total de vente de produit

	   std::cout << " Veuiller entrer le nombre total de vend de produit chimique: ";
	   std::cin >> vend;

	   //Demander au programme le nombre de semaine

	   std::cout << " Veuiller entrer le nombre de semaine :";
	   std::cin >> nbsemaine;

	   //Demander � l'utilisateur de marquer le nombre du salaire

	   std::cout << " Veuiller entrer votre salaire:";
	   std::cin >> salaire;

	   //Calcule afin d'obtenir le salaire
       
	   // je ne c'est pas quoi mettre ici pour if

	   {
		   std::cout << " Votre salaire est de:"; //Sa dit la r�ponse final du calcul
	   }

	   return 0;
 }



	
	
	
	
	
	
	
	
	

