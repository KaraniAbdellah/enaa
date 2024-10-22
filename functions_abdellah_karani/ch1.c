#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int a, b;
	printf("Enter number a: "); scanf("%d", &a);
	printf("Enter number b: "); scanf("%d", &b);
	
	int s = sum(a, b);
	printf("The sum = %d", s);
	
	return 0;
}





