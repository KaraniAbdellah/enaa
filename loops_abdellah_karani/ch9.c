#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 4 ==> 2 ** 2 = 4 ==> puissance is 2



int main() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i = 0;
	for (int i = n; i >= 0; i--) {
		int check = 0;
		for (int j = 0; j < n; j++) {
			if (i * j == n) {
				printf("%d ** %d\n", i, j);
				check = 1;
				break;
			}
		}
		if (check == 1) break;
	}
	
	
	return 0;
}



