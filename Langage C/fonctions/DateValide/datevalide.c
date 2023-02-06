#include<stdio.h>
int valide(int jour, int mois, int annee)
{
    if (mois == 1 || mois == 3 || mois == 5 || mois == 7 || mois == 8 || mois == 10 || mois == 12)
    {
        if (jour >= 1 && jour <= 31)
        {
            return 1;
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
            return 1;
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
                return 1;
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
                return 1;
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
}
int main(){
    int jour, mois, annee;
    printf("Entrez une date (jour mois annee) : ");
    scanf("%d %d %d", &jour, &mois, &annee);
    if (valide(jour, mois, annee) == 1)
    {
        printf("La date %d/%d/%d est valide", jour, mois, annee);
    }
    else
    {
        printf("La date %d/%d/%d n'est pas valide", jour, mois, annee);
    }
    return 0;
}