#include <stdio.h>
#include <math.h>



int main() {
    
    int a, b, c;
    printf("============ equation is : ax^2 + bx + c: ============\n");
    printf("enter a : "); scanf("%d", &a);
    printf("enter b : "); scanf("%d", &b);
    printf("enter c : "); scanf("%d", &c);
    
    int delta = pow(b, 2) - 4 * a * c;
    
    if (a != 0) {
		if (delta > 0) {
			int x1 = -b + sqrt(delta) / 2 * a;
			int x2 = -b - sqrt(delta) / 2 * a;
			printf("solution: x1 = %d & x2 = %d\n", x1, x2);			
		} else if (delta == 0) {
			int y = -b / 2 * a;
			printf("solution: y = %d\n", y);
		} else {
			printf("No Solution\n");
		}
    }
    
    

    return 0;
}

