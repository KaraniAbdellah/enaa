#include <stdio.h>
#include <stdbool.h>

int binary_search(int T[], int x, int n) {
	int max = n - 1;
	int min = 0;
	int mid;
	while (min <= max) {
		mid = (max + min) / 2;
		if (T[mid] == x) return mid + 1;
		else if (T[mid] > x) max = mid - 1;
		else min = mid + 1;
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
	printf("the position of %d is %d\n", x, binary_search(T, x, n));
	
	return 0;
}



