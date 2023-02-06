#include<stdio.h>
int sommeDiviseur(int n)
{
    int somme = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            somme = somme + i;
        }
    }
    return somme;
}
int main()
{
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    int somme = sommeDiviseur(n);
    printf("La somme des diviseurs de %d est %d", n, somme);
    return 0;
}