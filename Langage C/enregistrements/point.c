#include <stdio.h>

struct point {
    int x;
    int y;
};

float TBG_Racine(float x) {
    float y = 1;
    float z = 0;
    while (y != z) {
        z = y;
        y = (y + x / y) / 2;
    }
    return y;
}

float distance(struct point p1, struct point p2) {
    float d;
    d = TBG_Racine((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    return d;
}

int main() {
    struct point p1, p2;
    float d;
    printf("Entrez les coordonnées du premier point : ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Entrez les coordonnées du deuxième point : ");
    scanf("%d %d", &p2.x, &p2.y);
    d = distance(p1, p2);
    printf("La distance entre les deux points est : %f", d);
    return 0;
}