#include <stdio.h>

int main() {
    float f, c;
    printf("Entrez la temperature en Fahrenheit: ");
    scanf("%f", &f);
    
    c = (f - 32) / 1.8;
    
    printf("La temperature en Celsius est: %.2f\n", c);
    
    return 0;
}

