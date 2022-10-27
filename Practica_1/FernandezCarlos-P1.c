/* Carlos Fernandez Loran NIUB: 20733635 */

#include <stdio.h>

int main (void) {
	double x, y, x_aux, y_aux, aux  ;
	int n, i, defined = 1 ;

	/* VARIABLES:
	 * 	DOUBLE:
	 * 		x : valor inicial de la parte real introducida por el usuario
	 *		y : valor inicial de la parte imaginaria introducida por el usuario
	 *		x_aux | y_aux : variables auxiliares para el calculo de potencias
	 *	INT:
	 *		n : exponente al que se eleva el numero imaginario (introducida por el usuario)
	 *		i : iterador de los bucles for 
	 *		defined : variable con valor 1 por defecto que mantiene el bucle do...while iterando hasta que se da el caso 0 0 0
	 */

	do {
		scanf(" %lf %lf %d", &x, &y, &n) ; /* Se leen las variables x, y, n */
		printf("(%+.8le) + i(%+.8le) )**(%+d) = ", x, y, n) ; /* Se imprime la primera parte de la respuesta */

		if (x == 0 && y == 0 && n <= 0) { /* caso 1: (x,y) = (0,0) y n <= 0 */
			printf("no definit\n") ; 
			defined = 0 ; /* Sale del bucle */
		} else if (n == 0) printf("(%+.8le) + i(%+.8le)\n", 1., 0.) ; /* caso 2: (x, y) != (0,0) y n = 0 */
		else if (n > 0) { /* caso 3: n > 0 para todo (x,y) */
			/* Calculo de x + iy elevado a n*/
			x_aux = x ;
			y_aux = y ;
			for (i = 1; i < n; i++) { /* Bucle for para calcular la potencia, se repetira la multiplicacion n-1 veces */
				aux = x_aux * x - y_aux * y ; /* asigna nuevo valor de x_aux a aux para no sobreescrivir x_aux */
				y_aux = x_aux * y + y_aux * x ; 
				x_aux = aux ;
			}
			
			printf("(%+.8le) + i(%+.8le)\n", x_aux, y_aux) ;
		} else { /* caso 4: n < 0 y (x,y) != (0,0) */
			/* Calculo de x + iy elevado a -n */
			x_aux = x ;
			y_aux = y ;
			for (i = 1; i < -n; i++) {
				aux = x_aux * x - y_aux * y ;
				y_aux = x_aux * y + y_aux * x ;
				x_aux = aux ;
			}
			/* Invertir fraccion */
			aux = x_aux*x_aux + y_aux*y_aux ;
			x = x_aux / aux ;
			y = - y_aux / aux ;

			printf("(%+.8le) + i(%+.8le)\n", x, y) ;
		}

	} while (defined) ;

	return 0 ;
}
