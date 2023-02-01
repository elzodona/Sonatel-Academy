#include <stdio.h>

int main() {
    int n;
    int somme = 0;
    do
    {
        printf("Donnez le prix de l'article: (0 pour terminer le programme)" );
        scanf("%d", &n);

        //controle si le prix est positif
        while (n < 0)
        {
            printf("Le prix doit etre positif \n");
            printf("Donnez le prix de l'article: ");
            scanf("%d", &n);
        }
        // additionne au cas ou le prix est positif
        somme = somme + n;
    } while (n != 0);
    printf("La somme des articles est %d \n", somme);
    return 0;
}
