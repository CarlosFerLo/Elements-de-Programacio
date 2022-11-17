#include <stdio.h>

#define MAX_DIV 32
#define DIM 33

int main (void) {
	int n[2], v[2][DIM], i, j, div = 0 ;
	
	scanf(" %d %d", &n[0], &n[1]) ;
	if(n[0] >= 2 && n[0] <= 1000 && n[1] >= 2 && n[1] <= 1000 && n[0] != n[1]) {
		v[0][0] = v[1][0] = 0 ;
		for (j = 0; j < 2; j++) {
			for (i = 1; v[j][0] < DIM && i <= n[j]; i++) {
				if (n[j] % i == 0) {
					v[j][++v[j][0]] = i ;
				}
			}
			for (i = v[j][0]; i < DIM; i++) v[j][i] = 0 ;
		}
		
		for (i = 1; i < DIM && v[0][i] != 0; i++) {
			for (j = 1; j < DIM && v[1][j] != 0; j++) {
				if (v[0][i] == v[1][j]) div++ ;
			}
		}	

		if (div >= 4) printf("Tienen mas de 4 divisores comunes\n") ;
		else printf("Tienen menos de 4 divisores comunes\n") ;

		return 0 ;
	} else {
		printf("Datos invalidos\n") ;
		return 1 ;
	}
}
