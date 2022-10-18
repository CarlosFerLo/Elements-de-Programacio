#include <stdio.h>
#include <math.h>

int sumDiv (int n) ;

int main (void) {
	int m, n1, n2, i = 1;
	
	do {
		printf("\nIntroduce un numero: ") ;
		scanf(" %d", &m) ;
	} while (m <= 1) ;

	for (n2 = 3; n2 <= m; n2++) {
		for (n1 = 2; n1 < n2; n1++){
			if (sumDiv(n1) == n2 && n1 == sumDiv(n2)) printf("pareja %d: %d , %d\n", i++, n1, n2) ;
		}
	} 

	return 0;
}

int sumDiv (int n) {
	int i, suma = 1;
	for (i = 2; i < n; i++) if (n % i == 0) suma += i ; 
	return suma ;
}
