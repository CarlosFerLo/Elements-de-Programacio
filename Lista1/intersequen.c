#include <stdio.h>

int main (void) {

	int x0 = 1, x1 = 0, x2 = 1, x3 = 0 ;

	while (x0 >= x1) {
		printf("Insertar primer intervalo: ");
		scanf("%d %d", &x0, &x1) ;
		printf("\n") ;
	}

	while (x2 >= x3) {
		printf("Insertar primer intervalo: ");
		scanf("%d %d", &x2, &x3) ;
		printf("\n") ;
	}

	if (x0 < x2) { 
		if (x1 < x2) {
			printf("Los intervalos no interseccionan\n") ;
		} else if (x1 < x3) {
			printf("El intervalo de interseccion es: [%d,%d]\n", x2, x1) ;
		} else {
			printf("El intervalo de interseccion es: [%d,%d]\n", x2, x3) ;
		}
	} else {
		if (x3 < x0) {
			printf("Los intervalos no interseccionan\n") ;
		} else if (x3 < x1) {
			printf("El intervalo de interseccion es: [%d,%d]\n", x0, x3) ;
		} else {
			printf("El intervalo de interseccion es: [%d,%d]\n", x0, x1) ;
		}
	}
	
	return 0 ;
}
