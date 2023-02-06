#include <stdio.h>
int Njours(int jour, int mois, int annee, int N)
{
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
    {
        if (jour >= 1 && jour <= 31)
        {
            if (jour + N <= 31)
            {
                jour = jour + N;
            }
            else
            {
                jour = jour + N - 31;
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
            if (jour + N <= 30)
            {
                jour = jour + N;
            }
            else
            {
                jour = jour + N - 30;
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
                if (jour + N <= 29)
                {
                    jour = jour + N;
                }
                else
                {
                    jour = jour + N - 29;
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
                if (jour + N <= 28)
                {
                    jour = jour + N;
                }
                else
                {
                    jour = jour + N - 28;
                    mois = mois + 1;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    printf("La date est %d/%d/%d", jour, mois, annee);
    return 0;
}
int main()
{
    int jour, mois, annee, N;
    printf("Entrez une date (jour, mois, année) : ");
    scanf("%d %d %d", &jour, &mois, &annee);
    printf("Entrez un nombre de jours : ");
    scanf("%d", &N);
    Njours(jour, mois, annee, N);
    return 0;
}