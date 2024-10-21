#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
	Ecrire un programme C qui utilise le principe de dichotomie
	pour trouver la solution de l'équation x^3+12x^2+1=0 dans
	l'intervalle [-15,-10] avec une précision de 0,00001.
*/


int main() {

	float a = -15.0, b = -10.0;
	float prec = 0.00001;
	
	// solution here [a, b]
	while (1) {
		float c = (a + b) / 2;
		float F_C = pow(c, 3) + 12 * pow(c, 2) + 1;
		float F_A = pow(a, 3) + 12 * pow(a, 2) + 1;
		if (F_C * F_A > 0) {
			// solution here [c, b]
			a = c;
		} else {
			// solution here [a, c]
			b = c;
		}
		if ((float) fabs(a - b) < prec) {
			printf("the solution is between %f & %f with precision of %f\n", a, b, prec);
			break;
		}
	}
	
	
	return 0;
}



