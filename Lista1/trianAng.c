#include <stdio.h>

int main(void) {

	double a, b, c ;

	printf("Insert the lengths of the sides of the triangle: ") ;
	scanf("%lf %lf %lf", &a, &b, &c) ;

	if (a < b+c && b < a+c && c < a+b) {
		/*Encontrar Hipotenusa (a) */
		double aux; 

		if (a < b) {
			aux  = a ;
			a = b ;
			b = aux ;
		}
		if (a < c) {
			aux = a ;
			a = c ;
			c = aux ;
		}	

		/* Tipo de triangulo */
		if (a*a == b*b + c*c) printf("El triangulo es rectangulo\n") ;
		else if (a*a < b*b + c*c) printf ("El triangulo es acutangulo\n") ;
		else printf ("El triangulo es obtusangulo\n") ;		

	} else printf("Not a triangle!\n") ;


	return 0 ;
}
