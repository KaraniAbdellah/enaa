#include <stdio.h>

int main() {
    float f, c;
    printf("Enter la temperature en Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) / 1.8;
    
    printf("La temperature en Celsius: %.2f\n", c);
    
    if (c <= 0)
        printf("Sensation: Tres froid\n");
    else if (c <= 15)
        printf("Sensation: Froid\n");
    else if (c <= 30)
        printf("Sensation: Chaud\n");
    else
        printf("Sensation: Tres chaud\n");

    return 0;
}

