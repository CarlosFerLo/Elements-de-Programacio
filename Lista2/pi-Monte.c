#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double estimatePi (int N) ;

int main (void) {
	int n, p = 100;

	for (n = 3; n <= 8; n++) {
		p *= 10 ;
		printf("1e%d\t%lf\n", n, estimatePi(p)) ;
	}
	return 0;
}

double estimatePi (int N) {
	int n, p_dentro = 0 ;
	double x, y;

	for (n = 0; n <= N; n++) {
		x = (double) rand() / RAND_MAX ;
		y = (double) rand() / RAND_MAX ;
		p_dentro += (x*x + y*y <= 1) ? 1 : 0 ;   
	}

	return (4. * p_dentro) / N ;
}

