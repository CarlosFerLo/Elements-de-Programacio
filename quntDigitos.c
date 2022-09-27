#include <stdio.h>

int main (void) {
	int x, digitos = 0 ;
	
	printf("Introduce un numero entero: ") ;
	scanf("%d", &x) ;	

	if (x == 0) digitos = 1 ;
	while (x > 0) {
		x /= 10 ;
		digitos++;
	}

	printf("\nEl numero tiene %d digitos\n", digitos) ;

	return 0;
}
