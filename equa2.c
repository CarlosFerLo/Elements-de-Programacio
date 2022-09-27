#include <stdio.h>
#include <math.h>

int main (void) {

	double a, b, c, det ;

	printf("Inserta coeficientes a, b y c de a*x^2 + b*x + c: ") ;
	scanf("%lf %lf %lf", &a, &b, &c) ;

	det = b*b - 4*a*c ;

	if (det == 0) { /* Solucion unica */
		printf("La solucion es unica y es x = %lf\n", ((-1) * b) / (2 * a)) ;
	} else if (det > 0) { /* Soluciones reales */
		det  = sqrt(det) ;
		printf("Hay dos soluciones reales x1 = %lf y x2 = %lf\n", ((-1) * b + det) / (2 * a), ((-1) * b - det) / (2 * a));
	} else { /* Soluciones imaginarias*/
		double real = (-1) * b / (2 * a), imaginaria = sqrt(-det) / (2 * a) ;
		printf("Hay dos soluciones imaginarias z1 = %lf + i%lf y z2 = %lf - i%lf\n", real, imaginaria, real, imaginaria) ;
	}
	
	return 0;
}
