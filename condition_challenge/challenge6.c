#include <stdio.h>


int main() {

	int year, choice;

	printf("========== menu ==========\n");
	printf("1. Mois\n");
	printf("2. Jours\n");
	printf("3. Heures\n");
	printf("4. Minutes\n");
	printf("5. Secondes\n");

	printf("Enter The Year: ");
	scanf("%d", &year);
	printf("Enter Your Choice : ");
	scanf("%d", &choice);

	long long int result;
	switch(choice) {
		case 1: {
			result = year * 12; printf("%d = %lld mois\n", year, result); break;
		}
		case 2: {
			result = year * 365; printf("%d = %lld jours\n", year, result); break;
		}
		case 3: {
			result = year * 365 * 24; printf("%d = %lld heures\n", year, result); break;
		}
		case 4: {
			result = year * 365 * 24 * 60; printf("%d = %lld minutes\n", year, result); break;
		}
		case 5: {
			result = year * 365 * 24 * 3600; printf("%d = %lld seconds\n", year, result); break;
		}
		default: {
			printf("Invalid operation\n");
		}
	}



	return 0;

}




