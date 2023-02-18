//DISCLAIMER: ce conde contient des buid-in fonction comme printf et fgets
#include <stdio.h>
#include <string.h>
int TBG_strlen(const char* chaine){
    int compteur = 0;
    while (chaine[compteur] != '\n')
    {
        compteur++;
    }
    return compteur;
}
void no_more_space(char *chaine){
    int i,j;
    for(i=0;i<TBG_strlen(chaine);i++){
        if(chaine[i]==' ' && chaine[i+1]==' '){
            for(j=i;j<TBG_strlen(chaine);j++){
                chaine[j]=chaine[j+1];
            }
            i--;
        }
    }
    if(chaine[0]==' '){
        for(i=0;i<TBG_strlen(chaine);i++){
            chaine[i]=chaine[i+1];
        }
    }
    if(chaine[TBG_strlen(chaine)-1]==' '){
        chaine[TBG_strlen(chaine)-1]='\0';
    }
}
char encodeur(char *phrase){
    int i, j;
    int lignes[26] = {2,2,2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    int colonnes[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
    int last_num = -1;
    //enleve les spaces inutiles
    no_more_space(phrase);
    for (i = 0; i < TBG_strlen(phrase); i++)
    {
        if (phrase[i] == ' ')
        {
            printf("00");
            last_num = -1;
        }else if(phrase[i] == '0'){
            printf('a');
            last_num = -1;
        }else if(phrase[i] == '1'){
            printf("b");
            last_num = -1;
        }
        else if(phrase[i] == '2'){
            printf("c");
            last_num = -1;
        }
        else if(phrase[i] == '3'){
            printf("d");
            last_num = -1;
        }
        else if(phrase[i] == '4'){
            printf("e");
            last_num = -1;
        }else if(phrase[i] == '5'){
            printf("f");
            last_num = -1;
        }else if(phrase[i] == '6'){
            printf("g");
            last_num = -1;
        }else if(phrase[i] == '7'){
            printf("h");
            last_num = -1;
        }
        else if(phrase[i] == '8'){
            printf("i");
            last_num = -1;
        }else if(phrase[i] == '9'){
            printf("j");
            last_num = -1;
        }
        else{
            int index = -1;
            //conversion minuscule
            if (phrase[i] >= 'A' && phrase[i] <= 'Z')
                index = phrase[i] - 'A';
                //conversion majuscule
            else if (phrase[i] >= 'a' && phrase[i] <= 'z')
                index = phrase[i] - 'a';
            if (index >= 0)
            {
                int num = lignes[index];
                if (num == last_num)
                    printf("0");
                for (j = 0; j < colonnes[index]; j++)
                    printf("%d", num);
                last_num = num;
            }
            else
                printf("%c", phrase[i]);
        }
    }

}
int main(){
    //un tableau multidimentionnel pour avoir une bonne vision du tab
    char code[11][5] = {{'0'}, {'1'}, {'2', 'a', 'b', 'c'}, {'3', 'd', 'e', 'f'},
                        {'4', 'g', 'h', 'i'}, {'5', 'j', 'k', 'l'}, {'6', 'm', 'n', 'o'},
                        {'7', 'p', 'q', 'r', 's'}, {'8', 't', 'u', 'v'}, {'9', 'w', 'x', 'y', 'z'}};
    char phrase[100];
    printf("Entrez une phrase: ");
    fgets(phrase,100,stdin);
    encodeur(phrase);
    printf("\n");
    return 0;
}
