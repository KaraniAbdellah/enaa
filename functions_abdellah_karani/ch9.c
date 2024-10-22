#include <stdio.h>
#include <stdbool.h>

int linear_search(int T[], int x, int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (T[i] == x) return i + 1;
	}
	return -1;
}	

int main() {
	int n, i, x;
	printf("Enter a size of array: ");
	scanf("%d", &n);
	printf("Enter searched ele: ");
	scanf("%d", &x);
	int T[n];
	for (i = 0; i < n; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	printf("the position of %d is %d\n", x, linear_search(T, x, n));
	
	return 0;
}



