#include <stdio.h>



int main() {
	
	int n, p;
	printf("Enter a Number : "); scanf("%d", &n);
	
	p = 0;
	while (n != 0) {
		p = p * 10 + n % 10;
		n = n / 10; 
	} 
	
	printf("nomber inverse c'est : %d\n", p);
	
	return 0;

}



