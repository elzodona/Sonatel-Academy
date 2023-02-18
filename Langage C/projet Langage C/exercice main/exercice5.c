#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tbg.h"

#define HAUT 1
#define BAS 2
#define ROUGE 1
#define BLEU 2

int exercice5()
{
    int ordre, couleur, position;
    printf("Entrez l'ordre de la matrice: ");
    scanf("%d", &ordre);
    if (!TBG_verif_ordre(ordre))
        return 0;
    couleur = TBG_select_couleur();
    position = TBG_select_position();

    //Impression de la matrice avec coloriage
    for (int i = 0; i < ordre; i++)
    {
        for (int j = 0; j < ordre; j++)
        {
            if ((position == HAUT && i <= j) || (position == BAS && i >= j))
                printf("\033[0;31m%d\033[0m\t", 0);
            else
                printf("\033[0;34m%d\033[0m\t", 0);
        }
        printf("\n");
    }
    return 0;
}
//Fonction pour vérifier si l'ordre est supérieur à 5
int TBG_verif_ordre(int ordre)
{  
    if (ordre <= 5)
    {
        printf("L'ordre doit être supérieur à 5\n");
        return 0;
    }
    return 1;
}

//Fonction pour sélectionner la couleur
int TBG_select_couleur()
{
    int choix;
    printf("Menu:\n1. Rouge\n2. Bleu\n");
    scanf("%d", &choix);
    if (choix != ROUGE && choix != BLEU)
    {
        printf("Option non valide. Veuillez ressaisir.\n");
        return TBG_select_couleur();
    }
    return choix;
}

//Fonction pour sélectionner la position
int TBG_select_position()
{
    int choix;
    printf("Menu:\n1. Haut\n2. Bas\n");
    scanf("%d", &choix);
    if (choix != HAUT && choix != BAS)
    {
        printf("Option non valide. Veuillez ressaisir.\n");
        return TBG_select_position();
    }
    return choix;
}
