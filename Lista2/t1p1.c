#include <stdio.h>

int sumDiv (int n) ;

int main (void) {
	int m, n, i = 1, aux;
	
	do {
		printf("\nIntroduce un numero: ") ;
		scanf(" %d", &m) ;
	} while (m <= 1) ;

	for (n = 3; n <= m; n++) {
		aux = sumDiv(n) ;
		if (sumDiv(aux) == n && aux < n)  printf("pareja %d: %d , %d\n", i++, aux, n) ;
		
	} 

	return 0;
}

int sumDiv (int n) {
	int i, suma = 1;
	for (i = 2; i < n; i++) if (n % i == 0) suma += i ; 
	return suma ;
}
