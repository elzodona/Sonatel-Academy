#include <stdio.h>
int main (){

    int i,N,cmp,nombre,j;

    do
    {
       printf("donner le nombre entier a saisir ");
       scanf("%d",&N);
    } while (N<=0);
    i=1;
    do
    {
        
        nombre=0;
        for (j= 2 ; j <i; j++)
        {
            if (i % j == 0)
            {
                nombre++;
            }
            
        }
        if (nombre==0)
        {
            printf("%d est premier",i);
            printf("\n");
            cmp++;
        }
        i++;
        
    } while (cmp!=N);
    
}
