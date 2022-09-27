#include <stdio.h>

int main (void) {


	int x1, x2, x3, aux ;

	printf("Inserta tres numeros: ") ;
	scanf("%d %d %d", &x1, &x2, &x3) ;

	if (x1 > x2) {
		aux = x1 ;
		x1 = x2 ;
		x2 = aux ;
	}	
	
	if (x2 > x3) {
		aux = x2 ;
		x2 = x3 ;
		x3 = aux ;
	}	

	if (x1 > x2) {
		aux  = x1 ;
		x1 = x2 ;
		x2 = aux ;
	}

	printf("\nLos numeros de menor a mayor son: %d %d %d\n", x1, x2, x3) ; 

	return 0 ;
}
