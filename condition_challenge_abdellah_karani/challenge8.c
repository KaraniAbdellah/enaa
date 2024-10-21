#include <stdio.h>


int main() {
	
	char c;
	printf("Enter a character : ");
	scanf("%c", &c);
	
	if (c >= 'a' && c <= 'z') {
		printf("%c pas un alphabet majuscule\n", c);
	} else {
		printf("%c est un alphabet majuscule\n", c);
	}
	
	
	return 0;
	
}



