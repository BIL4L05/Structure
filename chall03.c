#include <stdio.h>

typedef struct {
    float longueur ;
    float largeur ;
} Rectangle;

float surface(Rectangle r) {
    return r.longueur * r.largeur;
}

int main() {

    Rectangle re;

    printf("Taper la longueur: ");
    scanf("%f", &re.longueur);
    printf("Taper la largeur: ");
    scanf("%f", &re.largeur);

    float air = surface(re);

    printf("\n|| result ||\n");
    printf("Longueur: %.2f\n", re.longueur);
    printf("Largeur: %.2f\n", re.largeur);
    printf("Surface: %.2f\n", air);

    return 0;
}
