
#include <stdio.h>
int main(){
    int a;
    int b;
    int tmp;
    
    do
    {
     printf("Donnez le premier nombre: \n");
     scanf("%d", &a);
    if (a<0)
    {
       printf("l'entier saisi doit etre positif\n");
    }
    
    } while (a<=0);
    
    do
    {
         printf("Donnez le deuxieme nombre: \n");
     scanf("%d", &b);
    if (b<0)
    {
       printf("l'entier saisi doit etre positif\n");
    }
    } while (b<=0);
    

    //s'assurer que a est le plus grand
    if(a<b){
        tmp=a;
        a=b;
        b=tmp;
    }
    //calculer le pgcd
    while (a!=b)
    {
        a=a-b;
        if(a<b){
                    tmp=a;
        a=b;
        b=tmp;
        }
    }
    printf("Le pgcd est %d \n", a);
}
