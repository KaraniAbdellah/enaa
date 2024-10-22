#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 4 ==> 2 ** 2 = 4 ==> puissance is 2



int main() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i, j;
	// find the exposant and the base
	for (i = 1; i <= n; i++) {
		int p = i;
		for (j = 1; j <= n; j++) {
			if (p == n) {
				printf("%d ** %d\n", i, j);
			}
			p = p * i;		
		}
	}
	
	return 0;
}



