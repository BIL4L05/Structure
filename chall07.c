#include <stdio.h>

typedef struct{
    int jour;
    int mois;
    int annee;
}date;

int main() {

    date da;

    int *J = &da.jour ;
    int *M = &da.mois ;
    int *A = &da.annee ;

    printf("Taper le jour : ");
    scanf("%d" , J);
    printf("Taper le mois : ");
    scanf("%d" , M);
    printf("Taper l'annee : ");
    scanf("%d" , A);
    printf("%d/%d/%d" , *J , *M , *A);

    return 0;

}