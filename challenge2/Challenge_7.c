#include <stdio.h>

int main() {
    int a, b;
    
    printf("Entrez le nomber (a): ");
    scanf("%d", &a);
    
    printf("Entrez le nomber (b): ");
    scanf("%d", &b);

    printf("\n--- Resultat ---\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    
    if (b != 0) {
        printf("a / b = %d\n", a / b);
        printf("a %% b = %d\n", a % b);
    } else {
        printf("Erreur: Invalid Devision\n");
    }

    return 0;
}

