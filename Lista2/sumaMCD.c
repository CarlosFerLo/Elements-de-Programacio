#include <stdio.h>

int mcdf (int a, int b) ;

int main (void) {
	int mcd, suma = 0, x0 = 2, x1 = 3, i = 0 ;

	while (x0 >= 0 && x1 >= 0) {
		mcd = mcdf(x0, x1) ;
		if (mcd != 1) {
			if (i % 2 == 0) suma += mcd ;
			else suma -= mcd ;
			i++ ;
		} 
		scanf("%d %d", &x0, &x1) ;
	}
	
	printf("\n%d\n", suma) ;

	return 0;
}

int mcdf (int a, int b) {
	int aux;
	
	if (a < b) {
		aux = a;
		a = b;
		b = a;
	}

	while (a % b != 0) {
		aux = b ;
		b = a - b * (a / b) ;
		a = aux ;
	}

	return b ;
}
