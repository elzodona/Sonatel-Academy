#include <stdio.h>
int bissextile(int annee)
{
    if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0)
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
    int annee;
    printf("Entrez une année : ");
    scanf("%d", &annee);
    if (bissextile(annee) == 1)
    {
        printf("%d est une année bissextile", annee);
    }
    else
    {
        printf("%d n'est pas une année bissextile", annee);
    }
    return 0;
}