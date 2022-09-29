#include <stdio.h>

int main (void) {
	int count_p = 0, count_3 = 0, n ;

	scanf("%d", &n) ;

	while (n != -1) {
		if (n % 2 == 0) count_p++ ;
		if (n % 3 == 0) count_3++ ;

		scanf("%d", &n) ;
	}

	if (count_p > count_3) printf("Hay mas numeros pares\n") ;
	else if (count_3 > count_p) printf("Hay mas numeros multiplos de 3\n") ;
	else printf("Empate\n") ;

	return 0;
}
