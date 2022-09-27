#include <stdio.h>

int main (void) {

	int n ;
	
	printf("Inserta un numero entero: ") ;
	scanf("%d", &n) ;

	if (n < 10 && n > -10) {
		printf ("El numero insertado tiene solo un digito\n") ;
	} else {
		printf("El numero insetado tiene mas de un digito\n") ;
	}

	return 0 ;
}
