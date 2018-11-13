#include "action.h"

#define TEMPS 60

typedef struct Personne //Définition d'une structure comprenant différentes frequence cardiaques désirées
{
    int freqCardiaque;
    int freqMax;
    int freqMin;
};

//Déclaration des fonctions de récupération des données calculées

int moyennePoul();
int moyenneTemps();

int getPoulMax();
int getPoulMin();
int getNbvaleur();




