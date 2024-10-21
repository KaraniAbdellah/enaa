#include <stdio.h>


int main() {
	
	int n;
	printf("Enter a number of lines : ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}


/*
	inside the first loop you can use:
	for (int j = 0; j < n + i; j++) {
		if (j < n - 1 - i) {
			printf(" ");
		} else printf("*");
	}
*/


