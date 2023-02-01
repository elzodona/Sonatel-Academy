#include <stdio.h>
int main(){
  int n;
  int i;
  int somme = 0;
  do
  {
    printf("Donnez un nombre positif :");
    scanf("%d", &n);
    if (n < 0)
    {
      printf("Le nombre doit etre positif. \n");
    }
    
  } while (n < 0);

  for ( i = 1; i < n; i++)
  {
    if (n%i == 0)
    {
      somme +=i;
    }
  }
  if (somme == n)
  {
    printf("Ce nombre est parfait. \n");
  }else{
    printf("Ce nombre n'est pas partfait\n");
  }
  return 0;
}
