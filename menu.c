#include <stdio.h>
#include <stdlib.h>
#include "action.h"

//Déclaration des variables

int choixMenu;

//Définition des fonction d'affichage des menus

int afficherMenu()
{
    printf("\t--- Menu ---\n");
    printf("1 - Frequence cradiaque moyenne \n");
    printf("2 - Frequence cardiaque moyenne sur un laps de temps \n");
    printf("3 - Frequence cardiaque maximum \n");
    printf("4 - Frequence cardiaque minimum \n");
    printf("6 - Affichage des valeurs par ordre croissant \n");
    printf("7 - Affichage des valeurs par ordre decroissant \n");
    printf("8 - Affichage nombre de valeurs \n");

    return choixMenu;
}

void choisirMenu()
{
    choixMenu = afficherMenu();

    switch (choixMenu)
    {
        case 1 : calcul_moyennePoul();
            break;

        case 2 : calcul_moyenneTemps();
            break;

       /* case 3 :
            break;
        case 4 :
            break;*/

    }
}
