#include <stdio.h>

int main (void) {
	int n, i ;
	
	printf("Introduce un numero entero positivo: ") ;
	scanf("%d", &n) ;
	
	for (i = 0 ; i < n; i++) {
		printf("%s\n\n", (i % 2 == 0) ? "# # #" : " # # ") ;
	}
	
	return 0;
}
