#include <stdio.h>

int main (void) {
	int n, aux, i, j ;

	do{
		printf("Introduce un entero: ") ;
		scanf("%d", &n) ;
		aux = n ;
		j = 0 ;
		printf("%d =", aux) ;
		while (n % 2 == 0) {
			n /= 2 ;
			j++ ;
		}
		if (j > 0) printf(" 2(%d)", aux, j) ;
		j = 0 ;
		i = 3 ;
		while (n > 1) {
			if (n % i == 0) {
				j++ ;
				n /= i ;
			} else {
				if (j != 0) printf(" %d(%d)", i, j) ;
				i +=  2 ;
				j = 0 ;
			}
		} 
		if (j > 0) printf(" %d(%d)\n", i, j) ;
	} while (aux > 2) ; 

	return 0 ;
}
