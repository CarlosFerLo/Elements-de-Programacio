#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int x0, x1, x2, x3, y0, y1, y2, y3, contador = 0, m, f ;
	
	srand(time(NULL)) ;

	y0 = rand() % 10 ;
	do {
		y1 = rand() % 10 ;
	} while (y1 == y0);
	do {
		y2 = rand() % 10 ;
	} while (y2 == y1 || y2 == y0) ;
	do {	
		y3 = rand() % 10 ;
	} while (y3 == y0 || y3 == y1 || y3 == y2) ;
	
	do {
		contador++ ;
		m = f = 0 ;
		printf("%2d) Introduce 4 digitos: ", contador) ;
		scanf(" %d %d %d %d", &x0, &x1, &x2, &x3) ;

		if (x0 == y0) m++ ;
		else if (x0 == y1 || x0 == y2 || x0 == y3) f++ ;
		if (x1 == y1) m++ ;
		else if (x1 == y0 || x1 == y2 || x1 == y3) f++ ;
		if (x2 == y2) m++ ;
		else if (x2 == y1 || x2 == y0 || x2 == y3) f++ ;
		if (x3 == y3) m++ ;
		else if (x3 == y1 || x3 == y2 || x3 == y0) f++ ;

		if (m == 4) printf("Has ganado en %d intentos!\n", contador) ;
		else printf("\tm = %d f = %d\n", m, f) ;
 
	} while (!(x0 == y0 && x1 == y1 && x2 == y2 && x3 == y3)) ;

	return 0 ;
}
