#include<stdio.h>
int nombreAmis (int n)
{
    int somme = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            somme = somme + i;
        }
    }
    int somme2 = 0;
    for (int i = 1; i < somme; i++)
    {
        if (somme % i == 0)
        {
            somme2 = somme2 + i;
        }
    }
    if (somme2 == n)
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
    if (nombreAmis(n) == 1)
    {
        printf("%d est un nombre ami", n);
    }
    else
    {
        printf("%d n'est pas un nombre ami", n);
    }
    return 0;
}