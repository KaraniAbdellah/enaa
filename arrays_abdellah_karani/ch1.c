#include <stdio.h>


int main() {

	int T[5];
	for (int i = 0; i < 5; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	
	printf("The array in inverse order is :");
	for (int i = 4; i >= 0; i--) {
		printf("%d ", T[i]);
	}
	printf("/n");
		
	
	return 0;
}




