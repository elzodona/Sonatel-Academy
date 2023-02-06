#include <stdio.h>
int cinqjours(int jour, int mois, int annee)
{
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
    {
        if (jour >= 1 && jour <= 31)
        {
            if (jour + 5 <= 31)
            {
                jour = jour + 5;
            }
            else
            {
                jour = jour + 5 - 31;
                mois = mois + 1;
            }
        }
        else
        {
            return 0;
        }
    }
    else if (mois == 4 || mois == 6 || mois == 9 || mois == 11)
    {
        if (jour >= 1 && jour <= 30)
        {
            if (jour + 5 <= 30)
            {
                jour = jour + 5;
            }
            else
            {
                jour = jour + 5 - 30;
                mois = mois + 1;
            }
        }
        else
        {
            return 0;
        }
    }
    else if (mois == 2)
    {
        if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0)
        {
            if (jour >= 1 && jour <= 29)
            {
                if (jour + 5 <= 29)
                {
                    jour = jour + 5;
                }
                else
                {
                    jour = jour + 5 - 29;
                    mois = mois + 1;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            if (jour >= 1 && jour <= 28)
            {
                if (jour + 5 <= 28)
                {
                    jour = jour + 5;
                }
                else
                {
                    jour = jour + 5 - 28;
                    mois = mois + 1;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    printf("Dans 5 jours, nous serons le %d/%d/%d", jour, mois, annee);
    return 0;
}
int main()
{
    int jour, mois, annee;
    printf("Entrez une date (jour/mois/annee) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    cinqjours(jour, mois, annee);
    return 0;
}