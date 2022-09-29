#include <stdio.h>

int main (void) {
	int count = 0, n0, n1, n2, n3, n4, n5, x1, x2 ;
	
	printf("Instroduce la cadena de fichas: ") ;
	scanf("%d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5) ;
	
	x1 = n0 % 10 ;
	x2 = n0 / 10 ;
	
	count += (n1 / 10 == x1 || n1 / 10 == x2) ? 1 : 0 ;
	count += (n1 % 10 == x1 || n1 % 10 == x2) ? 1 : 0 ;
	count += (n2 / 10 == x1 || n2 / 10 == x2) ? 1 : 0 ;
	count += (n2 % 10 == x1 || n2 % 10 == x2) ? 1 : 0 ;
	count += (n3 / 10 == x1 || n3 / 10 == x2) ? 1 : 0 ;
	count += (n3 % 10 == x1 || n3 % 10 == x2) ? 1 : 0 ;
	count += (n4 / 10 == x1 || n4 / 10 == x2) ? 1 : 0 ;
	count += (n4 % 10 == x1 || n4 % 10 == x2) ? 1 : 0 ;
	count += (n5 / 10 == x1 || n5 / 10 == x2) ? 1 : 0 ;
	count += (n5 % 10 == x1 || n5 % 10 == x2) ? 1 : 0 ;
	
	printf("%s\n", count >= 2 ? "Si pot tirar almenys dos fitxes" : "No pot tirar almenys dos fitxes") ;

	return 0 ;
}
