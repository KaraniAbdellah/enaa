#include <stdio.h>
#include <stdbool.h>

int divededby(int n, int a) {
	if (n % a == 0) {
		return 0;
	}
	return 1;
}

int main() {
	int n, a, i;
	printf("Enter number n: "); scanf("%d", &n);
	
	for (i = 2; i < n; i++) {
		if (!divededby(n, i)) {
			printf("%d is not prime number\n", n); return 0;
		}
	}
	printf("%d is prime number\n", n);
	
	return 0;
}





