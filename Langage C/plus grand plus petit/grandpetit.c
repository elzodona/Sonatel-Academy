#include <stdio.h>

int main(){
    int nombre_a_deviner = 0, nombre_entre = 0;
    int tentatives = 0;
    //le joueur 1
    printf("Entrez le nombre que le joueur 2 doit deviner: ");
    scanf("%d", &nombre_a_deviner);
    //joueur 2
    do {
        printf("Devinez le nombre mystère: ");
        scanf("%d", &nombre_entre);
        if (nombre_entre > nombre_a_deviner)
        {
            printf("Le nombre a deviner est plus petit \n");
        }else{
            printf("Le nombre a deviner est plus grand \n");
        }
        tentatives ++ ;
    }while (nombre_a_deviner != nombre_entre);
    if (nombre_a_deviner == nombre_entre)
    {
        printf("Bravo ! Vous avez trouver le nombre mystère %d en %d coups. \n",nombre_a_deviner, tentatives);
    }
}
