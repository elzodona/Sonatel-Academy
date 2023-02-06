#include <stdio.h>
int Npositif (int n)
{
    if (n > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int suiteNb (int n)
{
    int somme = 0;
    int nbNb = 0;
    while (n != 0)
    {
        somme = somme + n;
        nbNb = nbNb + 1;
        printf("Entrez un nombre : ");
        scanf("%d", &n);
    }
    int nbNbPremier = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            nbNbPremier = nbNbPremier + 1;
            printf("%d est un nombre premier", n);
        }
    }
    int nbParfait = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            nbParfait = nbParfait + 1;
            printf("%d est un nombre parfait", n);
        }
    }
    printf("Le nombre d'entiers saisi est : %d", nbNb);
    printf("Le nombre de nombres premiers saisis est : %d", nbNbPremier);
    printf("Le produit des nombres parfaits saisis est : %d", nbParfait);
}
int main()
{   
    int n;
    suiteNb(n);
    return 0;
}