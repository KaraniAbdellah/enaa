#include <stdio.h>


// Declaration Etudiant
typedef struct Etudiant {
    int code;
    int age;
    char nom[20];
    char prenom[20];
} Etudiant;

// Declaration Date





int main() {

    // Creation
    Etudiant e1;

    // Remplissage
    printf("Enter votre nom: ");
    scanf("%s", e1.nom);
    printf("Enter votre prenom: ");
    scanf("%s", e1.prenom);
    printf("Enter votre code: ");
    scanf("%d", &e1.code);
    printf("Enter votre age: ");
    scanf("%d", &e1.age);



    // Affichage
    printf("Nom: %s\n", e1.nom);
    printf("Code: %d\n", e1.code);
    printf("Prenom: %s\n", e1.prenom);
    printf("Age: %d\n", e1.age);


    return 0;
}





/*
// Declaration Date
typedef struct Date {
    int jour;
    int mois;
    int annee;
} Date;
*/







