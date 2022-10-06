#include <stdio.h>
#include <math.h>

int isPrime (unsigned long long int n) ;

int main (void) {
	unsigned long long int n, m, prime_count = 1 ;

	printf("Introduce un numero: ") ;
	scanf("%llu", &m) ;

	for (n = 3; n <= m; n += 2) { 
		prime_count += isPrime(n) ? 1 : 0 ; 
	}

	printf("El %3.2lf%% de los numeros menores de %llu son primos\n", 100. * prime_count / m, m) ;

	return 0 ;
}

int isPrime (unsigned long long int n) {
	unsigned long long int i, sqrt_n = sqrt(n) ;
	for (i = 2 ; i <= sqrt_n ; i++) if (n % i == 0) return 0 ;
	return 1 ;
}
