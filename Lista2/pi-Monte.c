#include <stdio.h>
#include <stdlib.h> // Incluir la funcion rand() y srand()
#include <time.h> // Incluir la funcion time() para la generacion de numeros aleatorios

double estimatePi (int N) ; // declaracion de la funcion estimatePi()

/*
	Como no habeis hecho funciones basta con incluir el codigo de la funcion estimatePi()
	dentro del bucle for de la funcion main y asignar el return a una variable.
	Luego poner esa variable en el printf() en lugar de estimatePi(p) 
*/

int main (void) { 
	int n, p = 100; // declaracion de variables: n - contador de bucle for | p - numero de puntos que se utilizan en la aproximacion de la funcion estimatePi

	for (n = 3; n <= 8; n++) { // Se estima pi desde p = 1e3 a p = 1e8
		p *= 10 ; // Incremento de p por un factor de 10
		printf("1e%d\t%lf\n", n, estimatePi(p)) ; // Mostrar en pantalla numero de puntos utilizados junto con la aproximacion de pi
	}
	return 0;
}

double estimatePi (int N) { // definicion de la funcion estimatePi(), se le pasa el parametro N que es el numero de puntos que se utilizan en la aproximacion
	int n, p_dentro = 0 ; // se declaran las variables: n - contador del bucle for (cuantos puntos se han calculado) | p_dentro - numero de puntos que estan dentro de el circulo con radio 1 y con centro en (0,0)
	double x, y; // declaracion variables: coordenadas x e y de los puntos que se generaran

	for (n = 0; n < N; n++) { // se repite N veces
		x = (double) rand() / RAND_MAX ; // se genera un numero en [0, 1]
		y = (double) rand() / RAND_MAX ; // se genera un numero en [0, 1]
		p_dentro += (x*x + y*y <= 1) ? 1 : 0 ;   
		/* 
			Este operador (expresion) ? a : b se explica en el apartado de expresiones de los apuntes
			Es la abreviatura del siguiente if :
				if (x*x + y*y <= 1) p_dentro++
			Este evalua si el punto esta dentro del circulo con ecuacion. x*x + y*y = 1 y si es asi aumenta p_dentro
		*/
	}
	/*
		Una vez acabado de calcular todos los puntos que caen dentro del circulo se estima pi con la formula que aparece en el return
		Esa formula se calcula de la siguiente manera:
			Area del cuadrado de lado 1 = 1
			Area sector circular de radio 1 en el primer cuadrante = pi / 4
			Asumiendo q los puntos se distribuyen homogeneamente dentro del cuadrado, el numero de puntos en la circumferencia (p_dento)
			respecto al total (N) es la constante de proporcionalidad entre dichas areas, portanto: A_cuadrado * (p_dentro / N) = A_sector
			Sustituyendo se llega a: p_dentro / N = pi / 4 => pi = 4 * p_dentro / N
			Al ser todo enteros para que se aplique la division con doubles se usa 4. en lugar de 4
	*/
	return (4. * p_dentro) / N ;
}

