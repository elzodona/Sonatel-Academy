#include <stdio.h>
int main(){
    //Menu
    int m;
    printf("---------------Choisissez un élément:--------------- \n");
    printf("1- Mois en français. \n");
    printf("2- Mois en anglais. \n");
    printf("3- Quitter. \n");
    //controlle pour que le m soit compris entre 1 et 3
    do{
        printf("Votre choix: ");
        scanf("%d", &m);
        if (m < 1 || m > 3)
        {
            printf("Le nombre doit etre coompris entre 1 er 3: \n");
        }
    }while(m < 1 || m > 3);
    
    switch (m)
    {
    case 1:
        //affichage en français
        char tableau_fr[12][10] ={"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Julliet","Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
        int i; //boucle sur les lignes 
        int j; //boucle sur les colonnes
        printf("\nContenu du tableau :\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 4; j++) {
                printf("%s | ",tableau_fr[i * 4 +j]);
            }
            printf("\n");
        }
        break;
    case 2:
        //affichage en anglais
        char tableau_en[12][10] ={"January", "February", "Marsh", "April", "May", "June", "July","August", "September", "Octobre", "Novembre", "Decembre"};
        int k;
        int l;
        printf("\nContenu du tableau :\n");
        for (k = 0; k < 3; k++) {
            for (l = 0; l < 4; l++) {
                printf("%s | ",tableau_en[k * 4 +l]);
            }
            printf("\n");
        }
        break;
        case 3:
            printf("Vous avez quitter le programme \n");
            break;
        default:
        //affichage par defaut
        char tableau_fr_def[12][10] ={"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", "Julliet","Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
        int x;
        int y;
        printf("\nContenu du tableau :\n");
        for (x = 0; x < 3; x++) {
            for (y = 0; y < 4; y++) {
                printf("%s | ",tableau_fr_def[x * 4 +y]);
            }
            printf("\n");
        }
        break;
        break;
    }
    return 0;
}