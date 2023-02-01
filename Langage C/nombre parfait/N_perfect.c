#include <stdio.h>
int main(){
    int  i ;
    int n;
    int somme=0;
    printf("Donnez un nombre entier positif: ");
    scanf("%d", &n);
  for(i=1;i<n;i++){
    if(n%i==0){
      somme=somme+i;
    }
  }
  if(somme==n){
    printf("Le nombre %d est parfait \n", n);
  }
  else{
    printf("Le nombre %d n'est pas parfait \n", n);
  }
}
