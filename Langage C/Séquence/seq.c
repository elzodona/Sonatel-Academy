#include <stdio.h>

int main() {
  int n, i, longueur_max = 0, longueur = 1;
  int val_precedent, val_actuel;
  int start = 0; //premier position de la sequence la plus longue
  
  // Saisie de N
  printf("Entrez la valeur de N (entre 10 et 50): ");
  scanf("%d", &n);

  // Saisie du premier entier
  printf("Entrez un entier (entre 1 et 100): ");
  scanf("%d", &val_precedent);

  // Recherche de la plus longue séquence croissante
  for (i = 1; i < n; i++) {
    printf("Entrez un entier (entre 1 et 100): ");
    scanf("%d", &val_actuel);
    if (val_actuel > val_precedent) {
      longueur++;
    } else {
      if (longueur > longueur_max) {
        longueur_max = longueur;
        start = i - longueur;
      }
      longueur = 1;
    }
    val_precedent = val_actuel;
  }

  // Mise à jour de la plus longue séquence croissante si la dernière séquence est plus longue
  if (longueur > longueur_max) {
    longueur_max = longueur;
    start = n - longueur;
  }

  // Affichage de la plus longue séquence croissante
  printf("La plus longue sequence croissante est de longueur %d\n", longueur_max);
  printf("Elle commence a la position %d\n", start + 1);

  return 0;
}
