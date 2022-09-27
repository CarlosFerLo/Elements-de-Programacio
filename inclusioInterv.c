# include <stdio.h>

int main (void) {

	
	int x0 = 1, x1 = 0, x2 = 1, x3 = 0 ;
	
	/* Estntrar los intervalos */
		
	while (x0 >= x1) {
		printf("Insert the first interval: ") ;
		scanf("%d %d", &x0, &x1) ;
		printf("\n") ;
	} 
	
	while (x2 >= x3) {
		printf("Insert the second interval: ") ;
		scanf("%d %d", &x2, &x3) ;
		printf("\n") ;
	}

	if (x1 == x3 && x0 == x2) {
		printf("Ambos son el mismo intervalo!\n") ;
	} else if (x1 - x0 > x3 - x2) {
		if (x0 <= x2 && x1 >= x3) {
			printf("El intervalo [%d,%d] esta dentro del intervalo [%d,%d]\n", x2, x3, x0, x1) ;
		} else {
			printf("Ningun intervalo esta dentro del otro\n") ;
		}
	} else {
		if (x2 <= x0 && x3 >= x1) { 
			printf("El intervalo[%d,%d] esta dentro del intervalo [%d,%d]\n", x0, x1, x2, x3);
		} else {
			printf("Ningun intervalo esta dentro del otro\n") ;
		}
	} 
 
	return 0;
}
