#include <stdio.h>

int main() {
    float distance_metter, distance_mille, distance_km;

    printf("Saisir la distance en mille : ");
    scanf("%f", &distance_mille);

    distance_km = distance_mille / 1.609;
    distance_metter = distance_km * 1000;

    printf("La distance en mettre : %.2f\n", distance_metter);

    return 0;
}

