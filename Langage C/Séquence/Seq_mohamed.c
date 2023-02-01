//code proposé par mohamed
#include <stdio.h>


int main(){

    int N,b,position,sequence,pluslongsequence,nombredesequence,i,a,debutseqlong,debutnouveauseq;

    do
    {
        printf("donner la N valeur a saisir \n");
        scanf("%d",&N);
    } while (N<=10 || N>= 50);

    printf("ecrire donner un premier entier \n");
    scanf("%d",&a);
    b=a;
    position=1;
    sequence=1;
    pluslongsequence=0;
    debutnouveauseq=1;
    i=1;

    do
    {
        i++;

        printf("donner un entier entre 1 et 100\n");
        scanf("%d",&a);
        if (a>b)
        {
            sequence++;
            b=a;
        }
        else{
            
            if (pluslongsequence<sequence)
            {
                pluslongsequence=sequence;

            }
            sequence=1;
            nombredesequence++;
            b=a;
            position = i - sequence;
        }

    } while (i!=(N));
    if (pluslongsequence<sequence)
        {
        pluslongsequence=sequence;
        }
    printf("la plus long sequences est %d\n",pluslongsequence);
        printf("la position est %d\n",position + 1);
        printf("le nombre de sequence est %d\n",nombredesequence);


return 0;

}
