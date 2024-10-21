#include <stdio.h>


int main() {
	
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	if (n > 0) {
		printf("%d is big then 0\n", n);
	} else if (n < 0) {
		printf("%d is small then 0\n", n);
	} else {
		printf("%d is 0\n", n);
	}
	
	
	
	return 0;
	
}



