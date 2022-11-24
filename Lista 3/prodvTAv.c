#include <stdio.h>

#define DIM 15

int main (void) {
	int n, i, j, k ;
	double A[DIM][DIM], B[DIM][DIM], v[DIM], result ;

	printf("Introduce n: ");
	do {
		scanf(" %d", &n) ;
	} while (n <= 0 || n > DIM) ;

	printf("Introduzca los elementos de la matriz:\n") ;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf(" %lf", &A[i][j]) ;
		}
	}

	printf("Introduzca los elementos del vector: \n") ;
	for (i = 0; i < n; i++) {
		scanf(" %lf", &v[i]) ;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			B[i][j] = 0 ;
			for (k = 0; k < n; k++) {
				B[i][j] += v[i] * A[j][k] ;
			}
		}
	}

	result = 0 ;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			result += B[i][j] * v[j] ;
		}
	}

	printf("result: %lf", result) ;

	return 0 ;
}
