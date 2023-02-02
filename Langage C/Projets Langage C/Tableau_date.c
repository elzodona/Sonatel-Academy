 <stdio.h>

int main() {
    int tableau[3][4];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("Entrez une valeur pour la ligne %d colonne %d : ", i + 1, j + 1);
            scanf("%d", &tableau[i][j]);
        }
    }

    printf("\nContenu du tableau :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", tableau[i][j]);
        }
        printf("\n");
    }

    return 0;
}
