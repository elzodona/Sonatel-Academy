#include<stdio.h>
//fonction qui calcule toutes les nombres premiers entre 1 et n
int prime1N(int n)
{
    int nbNbPremier = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            nbNbPremier = nbNbPremier + 1;
            printf("%d \n", i);
        }
    }
    return nbNbPremier;
}
int main()
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    printf("Il y a %d nombre premier entre 1 et %d", prime1N(n), n);
    return 0;
}
