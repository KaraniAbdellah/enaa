#include <stdio.h>

int main() {
	
	int x, s = 0;
	for (int i = 0; i < 10; i++) {
		printf("enter a x number : ");
		scanf("%d", &x);
		if (x > 0) {
			s += x;
		}
	}
	printf("s = %d\n", s);
	
	return 0;
}


