#include "action.h"

int valeurMax() ///A adapter au reste du programme
{
    int tab[];
    int max = tab[1];

    for (i=1;i<tab[MAX];i++) ///indiquer le nombre max de données dans le tableau
    {
        if(tab[i]>max)
        {
            max=tab[i];
        }
    }
    printf("%d",max);
}

int valeurMin()
{
    int tab[];
    int min = tab[1];

    for (i=1;i<tab[MAX];i++) ///indiquer le nombre max de données dans le tableau
    {
        if(tab[i]<min)
        {
            min=tab[i];
        }
    }
    printf("%d",min);
}
