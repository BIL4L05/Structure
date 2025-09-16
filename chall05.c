
#include <stdio.h>
#include <string.h>

typedef struct {
    char titre[50];
    char auteur[50];
    int annee;
} book;

book addb(const char *titre, const char *auteur, int annee) {
    book l;
    strcpy(l.titre, titre);
    strcpy(l.auteur, auteur);
    l.annee = annee;
    return l;
}

int main() {
    
    book mine = addb("Je trahirai mon pays", "Mohammad al-Maghout.", 1987);

    printf("Titre  : %s\n", mine.titre);
    printf("Auteur : %s\n", mine.auteur);
    printf("Annee  : %d\n", mine.annee);

    return 0;
}
