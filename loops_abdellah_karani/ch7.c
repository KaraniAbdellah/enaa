#include <stdio.h>


/*
	U0 = 0
	U1 = 1
	Un = Un-1 + Un-2 
*/

int main() {

	int n, p, x;
	do {
		printf("Enter a number greater then 2 : ");
		scanf("%d", &n);
	} while (n < 2);
	
	
	int W = 0, U = 1, R; // U = U1 = 1 & W = U0 = 0
	for (int i = 2; i <= n; i++) {
		R = U + W;
		W = U;
		U = R;
	}
	printf("U%d = %d\n", n, R);
	
	return 0;
}



