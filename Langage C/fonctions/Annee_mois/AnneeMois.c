#include <stdio.h>
int AnneeMois(int annee, int mois)
{
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
    {
        return 31;
    }
    else if (mois == 4 || mois == 6 || mois == 9 || mois == 11)
    {
        return 30;
    }
    else if (mois == 2)
    {
        if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0)
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int annee, mois;
    printf("Entrez une année : ");
    scanf("%d", &annee);
    printf("Entrez un mois : ");
    scanf("%d", &mois);
    printf("Le mois %d de l'année %d comporte %d jours", mois, annee, AnneeMois(annee, mois));
    return 0;
}