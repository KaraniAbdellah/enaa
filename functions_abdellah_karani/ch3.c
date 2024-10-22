#include <stdio.h>
#include <stdbool.h>

bool isPremier(int n) {
	int i;
	for (i = 2; i < (n / 2 + 1); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	printf("Enter number n: ");
	scanf("%d", &n);
	
	if (isPremier(n)) {
		printf("%d is prime", n);
	} else {
		printf("%d is not prime", n);
	}
	
	return 0;
}





