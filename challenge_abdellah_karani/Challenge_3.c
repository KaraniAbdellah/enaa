#include <stdio.h>

int main() {
    float distance_metter, distance_mille, distance_km;

    printf("Saisir la distance en metter : ");
    scanf("%f", &distance_metter);

    distance_km = distance_metter / 1000;
    distance_mille = distance_km * 1.609;

    printf("La distance en mille : %.2f\n", distance_mille);

    return 0;
}

