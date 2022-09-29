#include <stdio.h>

int main (void) {
	int x1, x2, aux, mcm, mcd;
	
	printf("Introduce dos numeros enteros: ") ;
	scanf("%d %d", &x1, &x2) ;

	if (x1 > x2) {
		aux = x1 ;
		x1 = x2 ;
		x2 = aux ;
	}

	mcm = x2 * x1 ; 

	while (x1 % x2 != 0) {
		aux = x1 - x2 * (x1 / x2) ;
		x1 = x2 ;
		x2 = aux ;
	}

	mcd = x2 ;
	mcm /= mcd ;
	

	printf("\nm.c.d. %d m.c.m. %d\n", mcd, mcm) ; 
	
	return 0 ;
}
