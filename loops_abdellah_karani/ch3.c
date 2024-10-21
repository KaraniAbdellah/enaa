#include <stdio.h>


int main() {

	int n;

	do {
		printf("Enter a number != 0: ");
		scanf("%d", &n);

	} while (n == 0);

	int check = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d is not prime\n", n); check = 1;
			break;
		}
	}
	if (check == 0 || n == 2) printf("%d is prime\n", n);

	return 0;
}





