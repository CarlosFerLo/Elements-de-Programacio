#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tirarDado (void) ;

int main (void) {
	int p1 = 0, p2 = 0, d1, d2, i, kiriki = 0, aux ;
	
	for (i = 0; i < 5; i++) {
		printf("Tirada %d\n", i+1) ;
		/* Jugador 1 */
			d1 = tirarDado() ;
			d2 = tirarDado() ;
			
			printf(" Jugador 1: %d %d ", d1, d2) ;
			
			if (d1 + d2 == 3) {
				p1 += 50 ;
				kiriki = 1 ;
				printf("KIRIKI!!!\n") ;
			} else if (d1 == d2) {
				aux = d1 + d2 + 20 ;
				p1 += aux ;
				printf("+%d\n", aux) ;
			} else {
				aux = d1 + d2 ;
				p1 += aux ;
				printf("+%d\n", aux) ;
			}
		/* Jugador 2 */
			d1 = tirarDado() ;
			d2 = tirarDado() ;
			
			printf(" Jugador 2: %d %d ", d1, d2) ;
			
			if (d1 + d2 == 3) {
				p2 += 50 ;
				kiriki = 1 ;
				printf("KIRIKI!!!\n") ;
			} else if (d1 == d2) {
				aux = d1 + d2 + 20 ;
				p2 += aux ;
				printf("+%d\n", aux) ;
			} else {
				aux = d1 + d2 ;
				p2 += aux ;
				printf("+%d\n", aux) ;
			}
		/* Si Kiriki */
		if (kiriki != 0) break ;	

	}

	printf("%s : %d-%d\n", (p1 == p2) ? "Empate" : ((p1 > p2) ? "Gana jugador 1" : "Gana jugador 2"), p1, p2) ; 
	
	return 0 ;
}

int tirarDado (void) {
	srand(time(NULL) + rand()) ;
	return rand() % 6 + 1 ;
}
