#include <stdio.h>
#include <stdbool.h> //pour utiliser le type bool
int main(){
    int n;
    int i;
    bool est_premier;
    int somme=0;
    int compteur=0;
    int cpt_nombres_premiers=0;
    //teste si le nombre est 

    do{
        printf("Donnez un nombre entier positif: (0 pour terminer le programme)");
        scanf("%d", &n);
        compteur = compteur + 1;
        est_premier = true;

        if (n <= 0)//le nombre est negatif ou nul
        {
            printf("Le nombre doit etre positif \n");
        }
        else
        {
            //dans ce scope le nombre est positif
            for (i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    est_premier = false;
                    break;
                }
            }
            if (est_premier)
            {
                //Affiche le nombre premier
                printf("Le nombre %d est premier \n", n);
                cpt_nombres_premiers = cpt_nombres_premiers + 1;
            }
        }
    }while(n != 0);
    //Affiche le nombre d'entiers saisis
    printf("Le nombre d'entiers saisis est %d \n", compteur);
    //affiche le nombre de nombres premiers
    printf("Le nombre de nombres premiers est %d \n", cpt_nombres_premiers);
    return 0;
}
