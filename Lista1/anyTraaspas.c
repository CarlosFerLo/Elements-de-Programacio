#include <stdio.h>

int main (void) {

	int year;

	printf("Write the year you want to check for: ") ;
	scanf("%d", &year) ;

	if (year % 100 == 0) {
		if ((year /100) % 4 == 0) {
			printf("The year is 'de Traspas'\n") ;
		} else {
			printf("The year is a normal year\n") ;
		}
	} else if ((year - (year/100)*100) % 4 == 0) {
			printf("The year is 'de Traspas'\n") ;
	} else {
			printf("The year is a normal year\n") ;
	}

	return 0;
}
