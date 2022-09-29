#include <stdio.h>

int main (void) {
	int n, count = 0 ;

	scanf("%d", &n) ;

	while (n != -1) {
		if (n % 6 == 0) count++ ;
		scanf("%d", &n) ;
	}

	if (count > 0) printf("Hay un numero par multiplo de 3 en la lista\n") ;
	else printf("No hay ningun numero par multiplo de 3 en la lista\n") ;

	return 0 ;
}
