#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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


// Global Varaibles
Personne personnes[100];

// Affichage Des Informations
void affichage(int size, Personne personnes[size]) {
	
	if (size == -1 || size == 0) {
		printf("----------------\n");
		printf("Aucun Personne\n");
		printf("----------------\n");
		return;
	}
	
	printf("\nInformations\n");
	for (int i = 0; i < size; i++) {
		printf("\n-----------------\n");
		printf("Personne %d\n", i + 1);
		printf("nom: %s\n", personnes[i].nom);
		printf("age: %d\n", personnes[i].age);
		printf("rue: %s\n", personnes[i].adrs.rue);
		printf("ville: %s\n", personnes[i].adrs.ville);
		printf("code_postal: %d\n", personnes[i].adrs.code_postal);
	}
	
} 


// Remplissage Des Informations
void remplissage(int size, Personne personnes[size]) {

	for (int i = 0; i < size; i++) {
		printf("------Personne %d------\n", i + 1);
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
	
}

// Menu
void menu() {

	printf("==========================menu==========================\n");
	printf("1. Remplissage Des Information\n");
	printf("2. Affichage Des Information\n");
	printf("3. Modifier Des Information\n");
	printf("4. Supprimer Des Information\n");
	printf("0. exit\n");
	
}


// Modification
void modification(int size, Personne personnes[size]) {

	int nbr_personne;
	printf("Enter le nombre de perssone qui tu doit modifier: ");
	scanf("%d", &nbr_personne);
	
	if (nbr_personne <= 0 || nbr_personne > size) {
		printf("----------------\n");
		printf("Aucun Personne\n");
		printf("----------------\n");
		return;
	}
	
	printf("-Personne %d\n", nbr_personne);
	printf("Voter nom: ");
	scanf("%s", personnes[nbr_personne - 1].nom);
	printf("Voter age: ");
	scanf("%d", &personnes[nbr_personne - 1].age);
	printf("Voter rue: ");
	scanf("%s", personnes[nbr_personne - 1].adrs.rue);
	printf("Voter ville: ");
	scanf("%s", personnes[nbr_personne - 1].adrs.ville);
	printf("Voter code_postal: ");
	scanf("%d", &personnes[nbr_personne - 1].adrs.code_postal);
	
}

// Suppersion
void supperssion(int *size, Personne personnes[*size]) {
	
	int nbr_personne;
	printf("Enter le nombre de perssone qui tu doit supperimer: ");
	scanf("%d", &nbr_personne);
	
	if (nbr_personne <= 0 || nbr_personne > *size) {
		printf("----------------\n");
		printf("Aucun Personne\n");
		printf("----------------\n");
		return;
	}
	
	int index = nbr_personne - 1;
	
	for (int i = index; i < *size - 1; i++) {
		strcpy(personnes[i].nom, personnes[i + 1].nom);
		personnes[i + 1].age = personnes[i].age;
		personnes[i + 1].adrs.code_postal = personnes[i].adrs.code_postal;
		strcpy(personnes[i].adrs.rue, personnes[i + 1].adrs.rue);
		strcpy(personnes[i].adrs.ville, personnes[i + 1].adrs.ville);
	}
	*size -= 1;
	
}


int main() {
	
	int choix;
	int size = -1;
	do {
		menu();
		printf("Enter votre choix: ");
		scanf("%d", &choix);
		if (choix == 1) {
			printf("Enterez le nombre des personnes: ");
			scanf("%d", &size);
			remplissage(size, personnes);
		} else if (choix == 2) {
			affichage(size, personnes);
		} else if (choix == 3) {
			modification(size, personnes);
		} else if (choix == 4) {
			supperssion(&size, personnes);
		} else if (choix == 0) {
			exit(0);
		}
	} while(choix != 0);
	
	
	return 0;
}














