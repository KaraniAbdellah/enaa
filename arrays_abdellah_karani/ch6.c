#include <stdio.h>


void inserer(int T[], int size, int pos, int n) {
	for (int i = size; i > pos; i--) {
		T[i] = T[i - 1];
	}
	T[pos] = n;
}


int main() {

	int size, n, pos;
	printf("Enter array size: ");
	scanf("%d", &size);
	int T[size + 1];
	for (int i = 0; i < size; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	
	// Display Before Insertion
	printf("Before insertion : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", T[i]);
	}
	printf("\n");
	
	// Insertion
	printf("Enter a number : ");
	scanf("%d", &n);
	do {
		printf("Enter the index: ");
		scanf("%d", &pos);
	} while(pos < 0 || pos > size);
	
	inserer(T, size, pos, n);
	
	// Display After Insertion
	printf("After insertion: ");
	for (int i = 0; i < size + 1; i++) {
		printf("%d ", T[i]);
	}
	
	
	return 0;
}






