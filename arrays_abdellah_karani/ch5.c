#include <stdio.h>


void Affiche_Carre(int T[], int n) {
	printf("les carrés des éléments c'est: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", T[i] * T[i]);
	}
	printf("\n");
}

void Carre(int x) {
	printf("%d ", x * x);
}


int main() {

	int n;
	printf("Enter array size: ");
	scanf("%d", &n);
	int T[n];
	printf("Enter Array Eles: \n");
	for (int i = 0; i < n; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
	}
	// Methode 1
	printf("Methode 1: \n");
	Affiche_Carre(T, n);
	printf("====================\n");
	// Methode 2
	printf("Methode 2:\n");
	printf("les carrés des éléments c'est: ");
	for (int i = 0; i < n; i++) {
		Carre(T[i]);
	}
	printf("\n");

		
	
	return 0;
}






