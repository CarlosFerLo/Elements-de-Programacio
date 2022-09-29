#include <stdio.h>

int main (void) {
	int n = 1, total = -1, mult3 = 0 ;
	
	while (n <= 50 && n >= -50) {
		total++ ;
		mult3 += n % 3 == 0 ? 1 : 0 ;
		scanf("%d", &n) ;
	}

	printf("\nUn %lf %% de los numeros eran multiplos de 3\n", (100. * mult3) / total) ;
	
	return 0 ;
}
