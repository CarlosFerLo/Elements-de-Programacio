#include <stdio.h>
#include <math.h>

#define EPSILON 1e-6
#define P 1e3

#define PI 3.141592

double serieCos (double x) ;
double term (double x, int n) ;

int main (void) {
	double h = 2 * PI / P;
	int i;
	for (i = 0; i <= P; i++) printf("%4d \t %lf \t %lf\n", i, serieCos(i * h - PI), cos(i * h - PI)) ; 
	
	return 0 ;
}

double serieCos (double x) {
	double cos = 0, c ;
	int i ;
	for (i = 0; (((c = term(x, i)) >= 0) ? c : -c) > EPSILON; i++) cos += c ;
	return cos ;
}

double term (double x, int n) {
	double exp = 1, fact = 1 ;
	int i ;
	for (i = 1; i <= 2 * n; i++) {
		exp *= x ;
		fact *= i ;
	}
	return (n % 2 == 0) ? exp / fact : - exp / fact ; 
}
