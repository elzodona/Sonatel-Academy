#include <stdio.h>
int main(){
 int a;
 int b;
 int tmp;
 printf("Donnez le valeur de a :");
 scanf("%d", &a);
  printf("Donnez le valeur de a :");
 scanf("%d", &b);
 tmp = b;
 while (tmp % a != 0)
 {
    tmp+=b;
 }
 printf("Le PPCM est de : %d", tmp);
 
}
