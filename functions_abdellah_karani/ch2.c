#include <stdio.h>

void change(int a, int b) {
	printf("a = %d, b = %d\n", a, b);
	int c = b;
	b = a;
	a = c;
	printf("a = %d, b = %d\n", a, b);
}

int main() {
	int a, b;
	printf("Enter number a: "); scanf("%d", &a);
	printf("Enter number b: "); scanf("%d", &b);
	
	change(a, b);
	
	return 0;
}





