#include <stdio.h>
#include <stdbool.h>
#include "tbg.h"
#include "exercice5.c"
#include "exercice4.c"
#include "exercice6.c"
#include "exercice7.c"
int main(){
    int n;
    printf("--------------------------------------MENU--------------------------------------\n");
    printf("Choisissez parmis le menu\n");
    printf("1-Exercice 4\n");
    printf("2-Exercice 5\n");
    printf("3-Exercice 6\n");
    printf("4-Exercice 7\nVotre choix:");
    scanf("%d", &n);
    switch (n){
    case 1:
        printf("Exercice 4\n");
        exercice4();
        char choix1[4];
        bool veux_tu_continuer1 = true;
        while(veux_tu_continuer1){
            printf("Voulez-vous continuer ?");
            scanf("%s", choix1);
            if (choix1[0] == 'o'&& choix1[1] == 'u' && choix1[2]=='i'){
                exercice4();
            }else if (choix1[0] == 'n'&& choix1[1] == 'o' && choix1[2]=='n'){
                veux_tu_continuer1 = false;
            }else{
                printf("Donnez un choix valide \n.");
            }
        }
        break;
    case 2:
        printf("Exercice 5\n");
        exercice5();
        char choix[4];
        bool veux_tu_continuer = true;
        while(veux_tu_continuer){
            printf("Voulez-vous continuer (oui/non) ?");
            scanf("%s", choix);
            if (choix[0] == 'o'&& choix[1] == 'u' && choix[2]=='i'){
                exercice5();
            }else if (choix[0] == 'n'&& choix[1] == 'o' && choix[2]=='n'){
                veux_tu_continuer = false;
            }else{
                printf("Donnez un choix valide \n.");
            }
        }
        break;
    case 3:
        printf("Exercice 6\n");
        exercice6();
        char choix2[4];
        bool veux_tu_continuer2 = true;
        while(veux_tu_continuer2){
            printf("Voulez-vous continuer ?");
            scanf("%s", choix2);
            if (choix2[0] == 'o'&& choix2[1] == 'u' && choix2[2]=='i'){
                exercice6();
            }else if (choix2[0] == 'n'&& choix2[1] == 'o' && choix2[2]=='n'){
                veux_tu_continuer2 = false;
            }else{
                printf("Donnez un choix valide \n.");
            }
        }
        break;
        case 4:
        printf("Exercice 7\n");
        exercice7();
        char choix3[4];
        bool veux_tu_continuer3 = true;
        while(veux_tu_continuer3){
            printf("Voulez-vous continuer ?");
            scanf("%s", choix3);
            if (choix3[0] == 'o'&& choix3[1] == 'u' && choix3[2]=='i'){
                exercice4();
            }else if (choix3[0] == 'n'&& choix3[1] == 'o' && choix3[2]=='n'){
                veux_tu_continuer3 = false;
            }else{
                printf("Donnez un choix valide \n.");
            }
        }
        break;
    default:
        printf("Votre choix est invalide. \n");
        break;
    }
    return 0;
}
