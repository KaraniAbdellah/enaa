#include <stdio.h>


int main() {

	int n, p;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	p = 0;
	while (n != 0) {
		int tmp = n % 10;
		p = p * 10 + tmp;
		n = n / 10;
	}
	
	printf("inverse number is %d\n", p);
	
	return 0;
}



