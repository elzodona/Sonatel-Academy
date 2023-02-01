
#include <stdio.h>

int main()
{
    int sommme=0,n=0,i,moyenne;
    


    printf("donner les N valeur a saisir ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        sommme=sommme+i;
    
    }
    printf("la somme des %d entiers saisi est : %d",n,sommme);
    printf("\n");
    printf("la moyenne des %d entiers saisi est : %d",n,sommme/n);
    printf("\n");
    return 0 ;
}
