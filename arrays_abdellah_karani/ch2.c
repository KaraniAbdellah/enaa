#include <stdio.h>


int main() {

	int T[10];
	int s = 0, m;
	for (int i = 0; i < 10; i++) {
		printf("T[%d] = ", i);
		scanf("%d", &T[i]);
		s += T[i];
	}
	m = s / 10;
	printf("somme = %d && moyenne = %d\n", s, m);
	
	
	
	printf("/n");
		
	
	return 0;
}




