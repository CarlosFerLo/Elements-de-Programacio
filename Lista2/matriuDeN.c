#include <stdio.h>

int main (void) {
	int n, i, j ;
	
	printf("Introduce un numero entero: ") ;
	scanf("%d", &n) ;

	while (n != 0) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) printf("%d ", n) ;
			printf("\n") ;
		}
		printf("\n\nIntroduce un numero entero: ") ;
		scanf("%d", &n) ;
	}
	
	return 0;
}
