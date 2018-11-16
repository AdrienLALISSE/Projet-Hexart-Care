#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "action.h"
#include "donnees.h"

//Déclaration des variables

int nbValeur = 10;
int tmp1, tmp2;
int resultat;
int tabValeur[];

struct Personne pers_cardiaque;


//Définition des fonctions

int calcul_moyennePoul() //Calcule la valeur moyenne du poul
{
    printf("\n--- Calcul Moyen du Poul ---\n\n");

    resultat = tabValeur[nbValeur / 2];
    return resultat;
}

int calcul_moyenneTemps() // Calcule la valeur moyenne du poul sur un laps de temps donné
{
    printf("\n--- Calcul Moyen du Poul sur un laps de temps ---\n\n");

    printf("Entrez votre laps de temps minimum : ");
    scanf("%d", &tmp1);

    printf("Entrez votre laps de temps maximum : ");
    scanf("%d", &tmp2);

    while(resultat > tabValeur[tmp1] && resultat < tabValeur[tmp2])
    {
       resultat = (calcul_moyennePoul())/(TEMPS) ;
    }

    return resultat;
}

/*int calcul_PoulMax()//Calcule la valeur maximum du poul calculé
{

}

int calcul_PoulMin() //Calcule la valeur minimum du poul calculé
{

}

int afficher_LapsTemps() //Affiche le temps d'execution en millisecondes
{

}

int afficher_NbValeur() //Affiche le nombre de valeur calculées
{

}*/

void read_file()
{
    FILE* fichier = NULL;
    fichier = fopen("Battement.csv", "w+");

    fscanf("%d", &pers_cardiaque.freqCardiaque);
    fprintf("%d", pers_cardiaque.freqCardiaque, fichier);
}

