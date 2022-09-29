#include <stdio.h>

int main (void) {
	int x1 = 0, x2 = 0, posicion = 0 ;
	
	while (x1 <= 0 || x2 <= 0) {
		printf("\nIntroduzca dos numeros enteros positivos: ") ;
		scanf("%d %d", &x1, &x2) ;
	}	
	printf("\n") ;
	while (x1 > 0 && x2 > 0) {
		posicion++;
		if (x1 % 10 == x2 % 10) printf("A la posicio %d es repeteix la xifra %d\n", posicion, x1 % 10) ;
		x1 /= 10 ;
		x2 /= 10 ;
	}

	return 0;
}
