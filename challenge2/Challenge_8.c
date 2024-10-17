#include <stdio.h>


int main() {
	
	int a, b, c, d, s = 0, moy;
	printf("enter first number: "); scanf("%d", &a);
	printf("enter second number: "); scanf("%d", &b);
	printf("enter thirth number: "); scanf("%d", &c);
	printf	("enter fourth number: "); scanf("%d", &d);

	s = a + b + c + d;
	moy = s / 4;
	
	printf("somme = %d and moyenne = %d\n", s, moy);
	
	return 0;

}







