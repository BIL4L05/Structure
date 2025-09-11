#include <stdio.h>

struct personne {
    char nom[50] , prenom[50];
    int age ;
};

int main(){

    struct personne p1 ;

    printf("Taper votre prenom :");
    scanf("%49s", &p1.nom);
    printf("Taper votre nom :");
    scanf("%49s", &p1.prenom);
    printf("Taper votre age :");
    scanf("%d", &p1.age);

    printf("\n|| VOTRE CATRE D'INFORMATION ||\n");
    printf("Le nom : %s\n", p1.prenom);
    printf("Le prenom : %s\n", p1.nom);
    printf("L'age : %d ans\n", p1.age);

    return 0 ;
}