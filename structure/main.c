#include <stdio.h>


// Definition Du Type Adresse
typedef struct Adresse {
	char rue[20];
	char ville[20];
	int code_postal;
} Adresse;

// Definition Du Type Personne
typedef struct Personne {
	char nom[20];
	int age;
	Adresse adrs;
} Personne;



int main() {

	int n;
	printf("Ecrit le nomber des personnes: ");
	scanf("%d", &n);	
	Personne personnes[n];
	
	// Remplissage Des Informations
	for (int i = 0; i < n; i++) {
		printf("-Personne %d\n", i + 1);
		printf("Voter nom: ");
		scanf("%s", personnes[i].nom);
		printf("Voter age: ");
		scanf("%d", &personnes[i].age);
		printf("Voter rue: ");
		scanf("%s", personnes[i].adrs.rue);
		printf("Voter ville: ");
		scanf("%s", personnes[i].adrs.ville);
		printf("Voter code_postal: ");
		scanf("%d", &personnes[i].adrs.code_postal);
	}
	
	// Affichage Des Informations
	printf("\nInformations\n");
	for (int i = 0; i < n; i++) {
		printf("\n-----------------\n");
		printf("Personne %d\n", i + 1);
		printf("nom: %s\n", personnes[i].nom);
		printf("age: %d\n", personnes[i].age);
		printf("rue: %s\n", personnes[i].adrs.rue);
		printf("ville: %s\n", personnes[i].adrs.ville);
		printf("code_postal: %d\n", personnes[i].adrs.code_postal);
	}
	
	
	
	
	return 0;
}




