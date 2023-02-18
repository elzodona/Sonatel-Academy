#include <stdio.h>
#include <string.h>  
#include <malloc.h>
#include <stdbool.h>
#include "tbg.h"
bool TBG_verifier_numero(char* numero){
    if (numero[0] == '7' && numero[1] == '7' && numero[2] == ' ' && numero[3] == '7' && numero[4] == '8' && numero[5] == ' ' && numero[6] == '7' && numero[7] == '6' && numero[8] == ' ' && numero[9] == '7' && numero[10] == '0' && numero[11] == ' ' && numero[12] == '7' && numero[13] == '5' && numero[14] == ' '){
        return true;
    }else{
        return false;
    }
}
int TBG_compter_numero(char* numero){
    int compteur = 0;
    if (numero[0] == '7' && numero[1] == '7'){
        compteur++;
    }else if (numero[0] == '7' && numero[1] == '8'){
        compteur++;
    }else if (numero[0] == '7' && numero[1] == '6'){
        compteur++;
    }else if (numero[0] == '7' && numero[1] == '0'){
        compteur++;
    }else if (numero[0] == '7' && numero[1] == '5'){
        compteur++;
    }
    return compteur;
}
int TBG_afficher_numero(char* numero){
    if (TBG_verifier_numero(numero)){
        printf("Les numeros valides sont: %s", numero);
    }else{
        printf("Les numeros invalides sont: %s", numero);
    } 
    return 0;
}
int TBG_afficher_nombre_numero(char* numero){
    if (TBG_compter_numero(numero)){
        printf("Le nombre de numero de chaque operateur est: %d", TBG_compter_numero(numero));
    }
    return 0;
}
char* TBG_extracteur(char* s, char* delm)
{
    static int currIndex = 0;
    if(!s || !delm || s[currIndex] == '\0')
    return NULL;
    char *W = (char *)malloc(sizeof(char)*100);
    int i = currIndex, k = 0, j = 0;

    while (s[i] != '\0'){
        j = 0;
        while (delm[j] != '\0'){
            if (s[i] != delm[j])
                W[k] = s[i];
            else goto ettiquette;
            j++;
        }

        i++;
        k++;
    }
ettiquette:
    W[i] = 0;
    currIndex = i+1;
    //boucle = compteur++;
    return W;
}
int exercice4(){
    char s[100];
    char delm[] = " ";
    char *str = TBG_extracteur(s, delm);
    printf("Saisir une chaine de caracteres: ");
    scanf("%s", s);
    while(str){
        printf("%s", str);
        free(str);
        str = TBG_extracteur(s, delm);
    }
    //cannot continue :-(
    return 0;
}