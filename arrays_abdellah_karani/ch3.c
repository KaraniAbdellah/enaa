#include <stdio.h>


int linear_search(int T[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (T[i] == x) return i;
	} return -1;
}

int main() {

	int n = 8, x;
	int T[8];
	printf("Enter Array Eles: \n");
	for (int i = 0; i < n; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	printf("Enter the searched ele: ");
	scanf("%d", &x);
	
	int index = linear_search(T, n, x);
	if (index) {
		printf("%d exit in array in position %d\n", x, index);
	}
	
	
		
	
	return 0;
}




