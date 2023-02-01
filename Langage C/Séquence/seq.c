#include <stdio.h>

int main() {
  int n, i, max_len = 0, start = 0, len = 1;
  int prev, curr;

  // Saisie de N
  printf("Entrez la valeur de N (entre 10 et 50): ");
  scanf("%d", &n);

  // Saisie du premier entier
  printf("Entrez un entier (entre 1 et 100): ");
  scanf("%d", &prev);

  // Recherche de la plus longue séquence croissante
  for (i = 1; i < n; i++) {
    printf("Entrez un entier (entre 1 et 100): ");
    scanf("%d", &curr);
    if (curr > prev) {
      len++;
    } else {
      if (len > max_len) {
        max_len = len;
        start = i - len;
      }
      len = 1;
    }
    prev = curr;
  }

  // Mise à jour de la plus longue séquence croissante si la dernière séquence est plus longue
  if (len > max_len) {
    max_len = len;
    start = n - len;
  }

  // Affichage de la plus longue séquence croissante
  printf("La plus longue sequence croissante est de longueur %d\n", max_len);
  printf("Elle commence a la position %d\n", start + 1);

  return 0;
}
