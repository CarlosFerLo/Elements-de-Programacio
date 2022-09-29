#include <stdio.h>

int main (void) {
	int n, i = 0, j  = 0, aux_i, aux_j, k ;
	double c, aux_c ;
	
	printf("Introduce el numero de monomios que quiere introducir: ") ;
	scanf("%d", &n) ;
	
	for (k = 0; k < n; k++) {
		scanf("%d %d %lf", &aux_i, &aux_j, &aux_c) ;
		if (aux_i == i && aux_j == j) {
			c += aux_c ;
		} else if (aux_i + aux_j > j + i) {
			i = aux_i ;
			j = aux_j ;
			c = aux_c ;
		} else if (aux_i + aux_j == j + i) {
			if (aux_i > aux_j) {
			i = aux_i ;
			j = aux_j ;
			c = aux_c ;
			}
		}
	}
	
	printf("Monomi maxim: %d %d %lf\n", i, j, c) ;
	
	return 0 ;
}
