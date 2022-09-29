#include <stdio.h>

int main (void) {
	int n, i ;
	
	printf("Introduce un numero entero positivo: ") ;
	scanf("%d", &n) ;
	
	while (n > 0) {
		for (i = 0; i < n; i++) printf("%s\n\n", (i % 2 == 0) ? "# # #" : " # # ") ;
		printf("\n\nIntroduce un numero entero positivo: ") ;
		scanf("%d", &n) ;
	}
	return 0;
}
