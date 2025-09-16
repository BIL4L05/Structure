#include <stdio.h>

struct Produit {
    char nom[32];
    int prix;
    int quantite;
};

int main() {

    int n , i ;

    printf("Taper le nombre des produit : ");
    scanf("%d" , &n);

    struct Produit pro[n];

    for (i = 0 ; i < n ; i++) {
        printf("Produit %d : \n" , i + 1);
        printf("Taper le nom du produit : ");
        scanf("%s" , pro[i].nom);
        printf("Taper le prix du produit : ");
        scanf("%d" , &pro[i].prix);
        printf("Taper la quantite de produit : ");
        scanf("%d" , &pro[i].quantite);
    }

    for (i = 0 ; i < n ; i++) {
        printf("Le produit %d est %s sont prix est %d dh , il reste %d pieces.\n"
             , i + 1 , pro[i].nom , pro[i].prix , pro[i].quantite);
    }

    return 0;
}
