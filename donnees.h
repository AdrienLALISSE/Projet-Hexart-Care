#include "action.h"

#define TEMPS 60

typedef struct Personne //D�finition d'une structure comprenant diff�rentes frequence cardiaques d�sir�es
{
    int freqCardiaque;
    int freqMax;
    int freqMin;
};

//D�claration des fonctions de r�cup�ration des donn�es calcul�es

int moyennePoul();
int moyenneTemps();

int getPoulMax();
int getPoulMin();
int getNbvaleur();




