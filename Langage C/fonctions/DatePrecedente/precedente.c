#include <stdio.h>
int precedente(int jour, int mois, int annee)
{
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
    {
        if (jour == 1)
        {
            if (mois == 1)
            {
                jour = 31;
                mois = 12;
                annee = annee - 1;
            }
            else
            {
                jour = 31;
                mois = mois - 1;
            }
        }
        else
        {
            jour = jour - 1;
        }
    }
    else if (mois == 4 || mois == 6 || mois == 9 || mois == 11)
    {
        if (jour == 1)
        {
            jour = 30;
            mois = mois - 1;
        }
        else
        {
            jour = jour - 1;
        }
    }
    else if (mois == 2)
    {
        if (annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0)
        {
            if (jour == 1)
            {
                jour = 29;
                mois = mois - 1;
            }
            else
            {
                jour = jour - 1;
            }
        }
        else
        {
            if (jour == 1)
            {
                jour = 28;
                mois = mois - 1;
            }
            else
            {
                jour = jour - 1;
            }
        }
    }
    else
    {
        return 0;
    }
    printf("La date precedente est %d %d %d", jour, mois, annee);
    return 0;
}
int main()
{
    int jour, mois, annee;
    printf("Entrez une date (jour mois annee) : ");
    scanf("%d %d %d", &jour, &mois, &annee);
    precedente(jour, mois, annee);
    return 0;
}