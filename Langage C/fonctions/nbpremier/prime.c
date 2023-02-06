#include <stdio.h>
int nbPremier (int n)
{
    int somme = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            somme = somme + i;
        }
    }
    if (somme == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    if (nbPremier(n) == 1)
    {
        printf("%d est un nombre premier", n);
    }
    else
    {
        printf("%d n'est pas un nombre premier", n);
    }
    return 0;
}