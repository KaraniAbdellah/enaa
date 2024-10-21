#include <stdio.h>

int main() {
    int n;

    printf("Entre un nombre : ");
    scanf("%d", &n);

	if (n == 0) {
		printf("%d est un nomber null.\n", n);
	}
    else if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    return 0;
}

