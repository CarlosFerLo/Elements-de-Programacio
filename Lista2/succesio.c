#include <stdio.h>

#define N_TERMES 50

int main (void) {
	double a, b, x1, x2, aux ;
	int n ;

	printf("Introduce los valores de a, b, x1, x2: ") ;
	scanf("%lf %lf %lf %lf", &a, &b, &x1, &x2) ;

	printf(" n\t\tx_n\t\t\tquocient\n") ;
	printf("===\t\t====\t\t\t========\n") ;
	printf("0\t%.16le\n", x1) ;
	printf("1\t%.16le\t%.16le\n", x2, x2/x1) ;
	for (n = 2; n <= N_TERMES; n++) {
		aux = x2 ;
		x2 = a * x2 + b * x1 ;
		x1 = aux ;

		printf("%d\t%.16le\tt%.16le\n", n, x2, x2/x1) ;
	}
	return 0 ;
}
