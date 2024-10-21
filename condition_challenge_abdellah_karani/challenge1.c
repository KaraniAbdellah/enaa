#include <stdio.h>

int main() {
    float f, c;

    printf("Entrez la température en Fahrenheit : ");
    scanf("%f", &f);

    c = (c - 32) / 1.8;

    printf("La température en Celsius est : %.2f\n", c);

    if (c < 0) {
        printf("Sensation : très froid\n");
    } else if (c < 10) {
        printf("Sensation : froid\n");
    } else if (c < 25) {
        printf("Sensation : chaud\n");
    } else {
        printf("Sensation : très chaud\n");
    }


    return 0;
}




