#include <stdio.h>
#include <stdlib.h>
  //ce code ne gere pas les entrés 
const char *couleurs[10] = { "Rouge", "Vert", "Bleu", "Jaune", "Violet", "Gris", "Rose", "Noire", "Blancs", "Bleu Ciel" };
const char *codeCouleurs[] = { 
"\033[0;31m*\033[0m\t", //rouge
"\033[0;32m*\033[0m\t", //vert
"\033[0;34m*\033[0m\t", //bleu
"\033[0;33m*\033[0m\t", //jaune
"\033[0;35m*\033[0m\t", //violet
"\033[0;90m*\033[0m\t", //gris
"\033[0;95m*\033[0m\t", //rose
"\033[0;30m*\033[0m\t", //noire
"\033[0;37m*\033[0m\t", //blanc
"\033[0;94m*\033[0m\t", //bleu ciel
};
const char *positions[6] = { "ADDP", "EDDP", "SDP", "ADDS", "EDDS", "SDS" };
int ordre, choix_couleur, choix_position;

void coloriermatrice() {
  for (int i = 0; i < ordre; i++) {
    for (int j = 0; j < ordre; j++) {
      if ((choix_position == 1 && i <= j) || 
      (choix_position == 2 && i >= j) || (choix_position == 3 && i == j) || (choix_position == 4 && i + j <= ordre - 1) || (choix_position == 5 && i + j >= ordre - 1) || (choix_position == 6 && i + j == ordre - 1)) {
        printf("%s", codeCouleurs[choix_couleur - 1]);
      } else {
        printf("*");
      }
    }
    printf("\n");
  }
}

int exercice6() {
    printf("Donnez l'ordre de la matrice: ");
    if (scanf("%d", &ordre) != 1 || ordre < 4) {
    printf("L'ordre de la matrice doit etre plus grand ou egal a  %d.\n", 4);
    return 1;
  }
    //menu couleurs
    printf("Couleurs:\n");
    for (int i = 0; i < 10; i++) {
      printf("%d. %s\n", i + 1, couleurs[i]);
    }
    printf("Choisi uun couleur. ");
    if (scanf("%d", &choix_couleur) != 1 || choix_couleur < 1 || choix_couleur > 10) {
      printf("Choix de couleur invalide.\n");
    return 1;
  }

  //menu position 
  printf("Positions:\n");
  for (int i = 0; i < 6; i++) {
    printf("%d. %s\n", i + 1, positions[i]);
  }
  printf("Choisi une position: ");
  if (scanf("%d", &choix_position) != 1 || choix_position < 1 || choix_position > 6) {
    printf("Choix de position.\n");
    return 1;
  }
  coloriermatrice();
  return 0;
}
