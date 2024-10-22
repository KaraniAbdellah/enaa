#include <stdio.h>

void bubble_sort(int T[], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (T[j] < T[j + 1]) {
				int temp = T[j];
				T[j] = T[j + 1];
				T[j + 1] = temp;
			}
		}
	}	
}




int main() {
	int n, i;
	printf("Enter array size: ");
	scanf("%d", &n);
	int T[n];
	for (i = 0; i < n; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	printf("ELes before sorting: ");
	for (i = 0; i < n; i++) {
		printf("%d ", T[i]);
	}
	bubble_sort(T, n);
	printf("\nELes after sorting: ");
	for (i = 0; i < n; i++) {
		printf("%d ", T[i]);
	}
	
	return 0;
}


