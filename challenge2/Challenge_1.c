#include <stdio.h>

int main() {
    char nom[30], prenom[30], sexe[10], telephone[15];
    int age;

    // Inputs
    printf("Entrez votre nom: ");
    scanf("%s", nom);

    printf("Entrez votre prenom: ");
    scanf("%s", prenom);

    printf("Entrez votre âge: ");
    scanf("%d", &age);

    printf("Entrez votre sexe: ");
    scanf("%s", sexe);

    printf("Entrez votre numero de téléphone: ");
    scanf("%s", telephone);

    // Outputs
    printf("\nInformations personnelles:\n");
    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d\n", age);
    printf("Sexe: %s\n", sexe);
    printf("Telephone: %s\n", telephone);

    return 0;
}




