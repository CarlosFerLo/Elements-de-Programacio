#include <stdio.h>
#include <math.h>

#define EPSILON 1e-3
#define P 1000 

double expSeries (double x, double epsilon) ;

int main (void) {
	int i ;
	double h = 50. / P;
	
	for (i = 0; i <= P; i++) {
		printf("%4d \t %lf \t %lf\n", i, expSeries(h * i, EPSILON), exp(h * i)) ;	
	} 

	return 0 ;
}

double expSeries (double x, double epsilon) {
	double e_x = 1, c = 1;
	int n ;	

	for (n = 1; (((c *= x / n ) >= 0) ? c : -c ) > EPSILON; n++) e_x += c ;

	return e_x ;
}

