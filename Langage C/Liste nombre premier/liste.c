#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Entrez un entier positif N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        bool est_premier = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                est_premier = false;
                break;
            }
        }
        if (est_premier) {
            printf("%d\n", i);
        }
    }

    return 0;
}
