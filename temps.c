#include <stdio.h>

int main (void) {

	int horas, minutos, segundos ;

	printf("Introduzca la hora en formato HH MM SS: ") ;
	scanf("%d %d %d", &horas, &minutos, &segundos) ;

	segundos += 1 ;

	while (segundos >= 60) {
		minutos += 1;
		segundos -= 60 ;
	} 
	
	while (minutos >= 60) {
		horas += 1;
		minutos -= 60 ;
	}
	
	if (segundos == 0) {
		if (minutos == 0) {
			printf("\n%d:00:00\n", horas) ;
		} else {
			printf("\n%d:%2.0d:00\n", horas, minutos) ;
		}
	} else {
		if (minutos == 0) {	
			printf("\n%d:00:%2.0d\n", horas, segundos) ;
		} else {
			printf("\n%d:%2.0d:%2.0d\n", horas, minutos, segundos) ;
		}		
	}

	return 0 ;
}
