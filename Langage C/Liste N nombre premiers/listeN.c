#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, compteur = 0;
    do
    {
        printf("Entrez un entier positif N: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Le nombre doit etre positif : \n");
        }
        
    } while (n<0);
    
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
