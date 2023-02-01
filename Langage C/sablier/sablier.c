#include <stdio.h>

int main() {
  int n;
  int i, j;

  //choix du symbole
  char s;
  printf("Donnez le symbole du dessin.");
  scanf("%c", &s);

  //controle de saisie pour que le nombre soit au lmoins egal a 2
  do {
    printf("Donnez le nombres de lignes qui est au moins 2: ");
    scanf("%d", &n);
    if (n < 2)
    {
      printf("Le nombre doit etre plus grand que deux pour que le sablier soit beau ;-)\n");
    }
    
  }while(n<2);
  
  //dessin du haut du sablier
  for (i=1; i<=n; i++) {
    for (j=1; j<=i; j++) 
      printf(" ");
    for (j=1; j<=2*(n-i)+1; j++) 
      printf("%c", s);
    printf("\n");
  }

  //dessin du bas du sablier
  for (i=n-1; i>=1; i--) {
    for (j=1; j<=i; j++) 
      printf(" ");
    for (j=1; j<=2*(n-i)+1; j++) 
      printf("%c", s);
    printf("\n");
  }
  return 0;
}
