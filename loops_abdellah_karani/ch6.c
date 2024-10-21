#include <stdio.h>


int main() {

	int n, p, x;
	printf("Enter a number : ");
	scanf("%d", &n); // n = 10
	
	for (int i = 0; i < n; i++) {
		printf("enter x number : ");
		scanf("%d", &x);
		if (x >= 2 && x <= n) {
			int check = 0;
			for (int i = 2; i < x; i++) {
				if (x % i == 0) {
					printf("%d is not prime\n", x); check = 1;
					break;
				}
			}
			if (check == 0 || x == 2) printf("%d is prime\n", x);
		} else {
			printf("%d out of range\n", x);
		}
	}
	
	return 0;
}



