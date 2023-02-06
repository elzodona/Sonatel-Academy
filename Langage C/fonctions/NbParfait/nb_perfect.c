#include <stdio.h>
int nbParfait (int n)
{
    int somme = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            somme = somme + i;
        }
    }
    if (somme == n)
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
    if (nbParfait(n) == 1)
    {
        printf("%d est un nombre parfait", n);
    }
    else
    {
        printf("%d n'est pas un nombre parfait", n);
    }
    return 0;
}