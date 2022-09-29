#include <stdio.h>

int main (void) {
	int x1, x2, suma1 = 0, suma2 = 0, i ;

	printf("Introduzca dos numeros enteros: ") ;
	scanf("%d %d", &x1, &x2) ;

	for (i = 1; i < x1; i++) {
		if (x1 % i == 0) suma1 += i ;
	}

	for (i = 1; i < x2; i++) {
		if (x2 % i == 0) suma2 += i ;
	}
	
	if (suma1 == x2 && suma2 == x1) printf("\nLos numeros %d y %d son amigos!\n", x1, x2) ;	
	else printf("\nLos numeros no son amigos :(\n") ;	

	return 0;
}
