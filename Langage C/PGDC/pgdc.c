#include <stdio.h>
int main(){
    int a;
    int b;
    int tmp;
    printf("Donnez le premier nombre: ");
    scanf("%d", &a);
    printf("Donnez le deuxieme nombre: ");
    scanf("%d", &b);
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
