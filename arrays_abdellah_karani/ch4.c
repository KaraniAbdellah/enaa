#include <stdio.h>



int main() {

	int n = 7, min, max;
	int T[7];
	printf("Enter Array Eles: \n");
	for (int i = 0; i < n; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	
	min = T[0];
	max = T[0];
	for (int i = 1; i < n; i++) {
		if (min > T[i]) min = T[i];
		if (max < T[i]) max = T[i];
	}
	
	printf("max = %d & min = %d\n", max, min);
	
	
	
	return 0;
}




