#include <stdio.h>

int main (void) {
	int x0 = 1, x1 = 0; 
	
	while (x0 >= x1) {
		printf("Define un intervalo cerrado: ") ;
		scanf("%d %d", &x0, &x1) ;
	}

	if (x0 % 2 == 0) x0 += 1 ;

	while (x0 <= x1) {
		printf("%d\n", x0) ;
		x0 += 2 ;
	}
	
	return 0;
}
