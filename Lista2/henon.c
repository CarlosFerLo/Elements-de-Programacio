#include <stdio.h>

int main (void) {
	double x, y, m, n, i, aux ;

	printf("Introduce las coordenadas iniciales y el numero de puntos a calcular: ") ;
	scanf("%lf %lf %lf %lf", &x, &y, &m, &n) ;

	for (i = 0; i < m; i++) {
		aux = x ;
		x = 1 + y - 1.4 * x * x ;
		y = 0.3 * aux ;
	}

	for (i = 0; i < n; i++) {
		aux  = x ;
		x = 1 + y - 1.4 * x * x ;
		y = 0.3 * aux ;
		printf("%lf %lf\n", x, y) ;
	}

	return 0 ;
}
