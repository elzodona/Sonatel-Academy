//EXO5
#include <stdio.h>



int main(){

int a,b;


do
{
    printf("donner un entier positif ");
    scanf("%d", &a);
    printf("donner un autre entier positif");
    scanf("%d", &b);
} while ((a<=0) || (b>=0));
while (a!=b)
{
    if (a>b)
    {
        a=a-b;
    }
    else{
        b=b-a;
    }

    printf("le PPCM est %d ", a);*
}
return 0;
}
