#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void no_more_space(char *chaine){
    int i,j;
    for(i=0;i<strlen(chaine);i++){
        if(chaine[i]==' ' && chaine[i+1]==' '){
            for(j=i;j<strlen(chaine);j++){
                chaine[j]=chaine[j+1];
            }
            i--;
        }
    }
}

void viderBuffer() // il vide le buffer en cas d'exces de carcatere.
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int lire(char *chaine, int longueur)
{
    char *positionEntree = NULL;

    if (fgets(chaine, longueur, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');
        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
        return 1;
    }
    else
    {
        viderBuffer();
        return 0;
    }
}

long lireLong(char *chaine, int longueur)
{
    char nombreTexte[1000] = {0}; // 100 cases devraient suffire

    if (lire(nombreTexte, 1000))
    {
        // Si lecture du texte ok, convertir le nombre en long et le retourner
        return strtol(nombreTexte, NULL, 10);
    }
    else
    {
        // Si problème de lecture, renvoyer 0
        return 0;
    }
}
int main(){
    char chaine[100];
    printf("Donnez une chaine: ");
    lire(chaine,100);
    no_more_space(chaine);
    printf("%s \n",chaine);
    return 0;
}
