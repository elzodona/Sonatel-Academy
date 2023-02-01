#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, compteur = 0;
    printf("Entrez un entier positif N: ");
    scanf("%d", &n);

    int i = 2;
    while (compteur < n) {
        bool est_premier = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                est_premier = false;
                break;
            }
        }
        if (est_premier) {
            printf("%d\n", i);
            compteur++;
        }
        i++;
    }

    return 0;
}
