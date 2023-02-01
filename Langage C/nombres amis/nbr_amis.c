#include <stdio.h>
int main(){
    int n1;
    int n2;
    int somme1=0;
    int somme2=0;
    printf("Donnez le premier nombre: ");
    scanf("%d", &n1);
    printf("Donnez le deuxieme nombre: ");
    scanf("%d", &n2);
    for(int i=2;i<n1-1 ;i++){
        if(n1%i==0){
            somme1=somme1+i;
        }
    }
    for(int i= 2 ; i < n2-1 ; i++){
        if(n2%i==0){
            somme2=somme2+i;
        }
    }
    if(somme1==n2 && somme2==n1){
        printf("Les nombres %d et %d sont amis \n", n1, n2);
    }
    else{
        printf("Les nombres %d et %d ne sont pas amis \n", n1, n2);
    }
    return 0;
}
