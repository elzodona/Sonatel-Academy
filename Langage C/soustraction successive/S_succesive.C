#include <stdio.h>
int main(){
    int dividende;
    int diviseur;
    int quotient;
    printf("Donnez le dividende: ");
    scanf("%d", &dividende);

    //verifie les coditions de validite de la dividende
    while (dividende < 0)
    {
        printf("Le dividende doit etre positif \n");
        printf("Donnez le dividende: ");
        scanf("%d", &dividende);
    }
    //verifie les coditions de validite de la diviseur
    do
    {
        printf("Donnez le diviseur: ");
        scanf("%d", &diviseur);
        if (diviseur == 0)
        {
            printf("Le diviseur doit etre different de 0 \n");
        }
    } while (diviseur == 0);
    
    while (dividende >= diviseur)
    {
        dividende = dividende - diviseur;
        quotient++;
    }
    printf("Le quotient est %d et le reste est %d \n", quotient, dividende);
}
