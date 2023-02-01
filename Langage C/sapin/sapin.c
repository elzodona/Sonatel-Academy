#include <stdio.h>

int main()
{
    char symbole;
    int hauteurFeuilles, hauteurTronc, largeurRacines;
    int r, i, j, k, l, m;

    printf("Quel symbole voulez-vous utiliser pour dessiner le sapin ? ($, *, + ou 0) : ");
    scanf("%c", &symbole);
    printf("Quelle hauteur voulez-vous pour les feuilles ? : ");
    scanf("%d", &hauteurFeuilles);
    printf("Quelle hauteur voulez-vous pour le tronc ? : ");
    scanf("%d", &hauteurTronc);
    printf("Quelle largeur voulez-vous pour les racines ? : ");
    scanf("%d", &largeurRacines);

    // Dessin des feuilles
    for (i = 1; i <= hauteurFeuilles; i++) {
        for (j = 1; j <= hauteurFeuilles - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++) {
            printf("%c", symbole);
        }
        printf("\n");
    }

    // Dessin du tronc
    r=0;
    do
    {
   for(l = 1;l <= ((hauteurFeuilles)-1); l++){
     printf(" ");
   	}
   	printf("%c\n",symbole);
   	r=r+1;
    }while(hauteurTronc!=r);
        for(i=1;i<=((hauteurFeuilles-1)-(largeurRacines/2));i++)
        {
        	printf(" ");
        }
        for(i=1;i<=largeurRacines;i++)
        printf("%c", symbole);

    return 0;
}
