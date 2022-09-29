#include <stdio.h>

int main (void) {
	char sexo = 'H';
	int marca = 0, numeroAtletas = -1, numeroH2 = 0, numeroD = 0, maxD = 0, sumaH2 = 0, sumaD = 0 ;

	while (sexo == 'H' || sexo == 'D') {
		numeroAtletas++ ;
		if (sexo == 'H') {
			if (marca >= 200) {
				numeroH2++ ;
				sumaH2 += marca ;
			}
		} else {
			numeroD++ ;
			sumaD += marca ;
			if (marca > maxD) maxD = marca ;
		}

		scanf(" %c %d", &sexo, &marca) ;
	}

	printf("\nNumero de atletas: %d\nNumero de hombres con marca superior a 2m: %d\nMedia de los saltos de hombres superiores a 2m: %.2lfm\nNumero de mujeres: %d\nMedia de saltos de mujeres: %.2lfm\nMaxima marca mujeres: %dcm\n", numeroAtletas, numeroH2, sumaH2 / (numeroH2 * 100.), numeroD, sumaD / (numeroD * 100.), maxD) ;

	return 0 ;
}
