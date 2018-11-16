#include <stdio.h>
#include <stdlib.h>

int affichageMenu(void) /* On initialise la fonction affichage menu */
{
    int choixMenu; /* On crée la variable choixMenu qui retournera un entier */

    printf("---Menu---\n\n");
    printf("1.Mode 1 led sur 2 allumée\n");
    printf("2.Mode 1 led sur 3 allumée\n");
    printf("3.Mode chenille\n");
    printf("4.Mode remplissage\n");
    printf("5.Mode Boom Boom\n\n\n");
    printf("Entrez le numéro du mode de votre choix\n\n\n");
    scanf("%d", &choixMenu);
    return choixMenu;
}
int main(void) // Initialisation de la boucle principale //
{
    switch (affichageMenu())
    {
        case 1:
            printf("Mode 1 led sur 2 allumée");
            system("open 1--2.ino");  // On appelle la commande système open (MacOS) permettant d'exécuter le fichier en question lorsqu'on entrera un 1 //
            break;
        case 2:
            printf("Mode 1 led sur 3 allumée");
            system("open 1--3.ino");
            break;
        case 3:
            printf("Mode chenille!");
            system("open chenille.ino");
            break;
        case 4:
            printf("Mode remplissage");
            system("open coeur_qui_se_remplit.ino");
            break;
        case 5:
            printf("Mode Boom Boom");
            system("open Boom_boom.ino");
            break;

    }

    return 0;
}