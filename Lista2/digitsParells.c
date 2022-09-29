#include <stdio.h>

int main (void) {
	int n = 0, digitsP = 0 ;	
	
	while (n == 0) {
		printf("\nInserta un numero entero no nulo: ") ;
		scanf("%d", &n) ;
	}

	while (n != 0) {
		if ((n % 10) % 2 == 0) digitsP++ ;
		n /= 10 ;
	}

	printf("\nNumero de digitos pares: %d\n", digitsP) ;

	return 0 ;
}
