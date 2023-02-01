#include <stdio.h>
int main(){
    int n;
    int i;
    int somme=0;
    //teste si le nombre est positif
    do
    {
        printf("Donnez un nombre entier positif: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Le nombre doit etre positif \n");
        }
    } while (n < 0);
    
    //fin du teste debute du verfications
    for( i=1 ; i<n ; i++){
        if(n%i==0){
            somme=somme+i;
        }
    }
    if(somme==1 ){
        printf("Le nombres %d est premier \n", n);
    }
    else{
        printf("Le nombres %d n'est pas premier \n", n);
    }
    return 0;

}

