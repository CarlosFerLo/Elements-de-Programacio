#include <stdio.h>

#define PI 3.141592

int main(void) {

	double r, area = 0, volumen = 0 ;

	printf("Inserta el radio de la esfera: ") ;
	scanf("%lf", &r) ;
	printf("\n") ;

	if (r > 0) {
		area = 4. * PI * r * r ;
		volumen = (4. / 3.) * PI * r*r*r ;  
	} else {
		r = r * (-1) ;
		area = 4 * PI * r * r ;
		volumen = 4. * PI * r*r*r / 3. ;  
	}

	printf("El volumen de la esfera es de %lf y el area es de %lf\n", volumen, area) ;

	return 0;
}	
