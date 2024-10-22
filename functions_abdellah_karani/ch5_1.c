#include <stdio.h>

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}
int multi(int a, int b) {
	return a * b;
}
float div(int a, int b) {
	return a / b;
}


int main() {
	int a, b;
	char c;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);	
	
	getchar();
	printf("choose an operator(+,-,/,*): ");
	scanf("%c", &c);
	
	switch(c) {
		case '+': {
			printf("%d + %d = %d\n", a, b, add(a, b));
			break;
		}
		case '-': {
			printf("%d - %d = %d\n", a, b, sub(a, b));
			break;
		}
		case '*': {
			printf("%d * %d = %d\n", a, b, multi(a, b));
			break;
		}
		case '/': {
			if (b == 0) printf("division by zero\n");
			else printf("%d / %d = %.2f\n", a, b, div(a, b));
			break;
		}
		default: {
			printf("Invalid operator\n");
			break;
		}
	}
	
	
	return 0;
}





