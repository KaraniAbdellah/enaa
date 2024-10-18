#include <stdio.h>
#include <math.h>



int main() {
	
	int largeur, longueur, cir_rec;
	printf("Enterez Largeur : "); scanf("%d", &largeur);
	printf("Enterez Longuer : "); scanf("%d", &longueur);
	
	cir_rec = 2 * (longueur + largeur);
	
	printf("Circonférence d'un rectangle C'est : %d\n", cir_rec);
	
	return 0;

}



