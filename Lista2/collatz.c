#include <stdio.h>

int main (void) {
	unsigned long long int n, max, qu = 0 ;

	printf("Introduce un numero entero positivo: ") ;
	scanf("%llu", &n) ;

	max = n ;

	while (n > 1) {
		qu++ ;
		n = (n % 2 == 0) ? n / 2 : 3 * n + 1 ;
		if (max < n) max = n ;
	}

	printf("\nNumero de itreaciones: %llu\nNumero mayor: %llu\n", qu, max) ;

	return 0 ;
}
