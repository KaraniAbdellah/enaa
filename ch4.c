#include <stdio.h>


int main() {

	int n, s = 0;
	do {
		printf("Enter a number : ");
		scanf("%d", &n);
		if (n < 100 && n > 0) s += n;
	} while(n != 0);
	
	printf("sum = %d\n", s);
	
	return 0;
}



