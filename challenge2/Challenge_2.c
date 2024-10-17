#include <stdio.h>

int main() {
    float f, c;

    printf("Entre la temperature en Fahrenheit : ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("La temperature en Celsius : %.2f\n", c);

    return 0;
}

