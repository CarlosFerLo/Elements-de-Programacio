#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int aleatorio (void) ;

int main (void) {
	
	int p1 = 0, p2 = 0 ;

	/* Generar tiradas aleatorias */
	int p1d1 = aleatorio(), p1d2 = aleatorio(), p2d1 = aleatorio(), p2d2 = aleatorio() ; 
	
	printf("Jugada del jugador 1: %d %d\n", p1d1, p1d2) ;
	printf("Jugada del jugador 2: %d %d\n", p2d1, p2d2) ;

	/* Calcular puntuación */
	if ((p1d1 == 1 && p1d2 == 2) || (p1d1 == 2 && p1d2 == 1)) {
		p1 = 50 ;
	} else if (p1d1 == p1d2) {
		p1 = p1d1*2 + 20 ;
	} else {
		 p1 = p1d1 + p1d2 ;
	}

	if ((p2d1 == 1 && p2d2 == 2) || (p2d1 == 2 && p2d2 == 1)) {
		p2 = 50 ;
	} else if (p2d1 == p2d2) {
		p2 = p2d1*2 + 20 ;
	} else {
		p2 = p2d1 + p2d2 ;
	}
	/* Indicar victoria + kiriki */
	if (p1 > p2) {
		printf("El jugador 1 ha ganado %d - %d!!!\n", p1, p2) ;
	} else if (p2 > p1) {
		printf("El jugador 2 ha ganado %d - %d!!!\n", p2, p1) ;
	} else {
		printf("Empate a %d\n", p1) ;
	}

	if (p1 == 50 || p2 == 50) printf("KIRIKI!!!\n") ;

	return 0;
}

int aleatorio (void) {
	srand(time(NULL) + rand()) ;
	return rand() % 6 + 1;
}
