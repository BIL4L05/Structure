#include <stdio.h>

#define Mn 5

typedef struct {
    char nom[50] , prenom[50];
    float notes[Mn];
} student;

int main() {

    student e1;
    int i;

    printf("Taper votre nom : ");
    scanf("%49s", e1.nom);
    printf("Taper votre prenom : ");
    scanf("%49s", e1.prenom);

    printf("Taper votre notes :\n");
    for (i = 0; i < Mn; i++) {
        printf("Note %d : ", i + 1);
        scanf("%f", &e1.notes[i]);
    }

    printf("\n|| VOTRE CARTE D'INFORMATIONS ||\n");
    printf("Nom : %s\n", e1.nom);
    printf("Prenom : %s\n", e1.prenom);

    printf("Notes : ");
    for (i = 0; i < Mn; i++) {
        printf("%f\n", e1.notes[i]);
    }

    return 0;
    
}
