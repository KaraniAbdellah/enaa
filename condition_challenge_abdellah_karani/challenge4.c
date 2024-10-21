#include <stdio.h>

int main() {
    int a, b, somme;

    printf("Entrez la première valeur entière : ");
    scanf("%d", &a);
    printf("Entrez la deuxième valeur entière : ");
    scanf("%d", &b);

    somme = a + b;

    if (a == b) {
        somme *= 3;
    }

    printf("Le résultat est : %d\n", somme);

    return 0;
}

