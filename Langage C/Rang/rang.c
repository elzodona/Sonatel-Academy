
#include <stdio.h>

int main (){

int a,i,rang,plg;



printf("donner la premier valeur ");
scanf("%d",&a);
plg=a;
rang=1;
for ( i = 2; i <= 10; i++)
{
    printf("donner l'entier suivant ");
    scanf("%d",&a);
    if (a > plg)
    {
       plg=a;
       rang=i;
    }
    
}
printf("le plus grand est %d ",plg);
printf("le rang du plus grand est %d",rang);

return 0;


}
