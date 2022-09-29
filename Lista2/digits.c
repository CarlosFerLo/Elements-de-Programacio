#include <stdio.h>

int main (void) {
	int n = 0, digits = 0 ;
	
	while (n == 0) {
		printf("\nInserta un numero entero no nulo: ") ;
		scanf("%d", &n) ;
	}

	while (n != 0) {
		digits++ ;
		n /= 10 ;
	}
	
	printf("\nNumero de digitos: %d\n", digits) ;

	return 0;
}
