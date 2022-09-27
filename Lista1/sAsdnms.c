#include <stdio.h>


int main (void) {
	
	int inSeconds ;
	int weeks = 0, days = 0, hours = 0, minutes = 0 ;

	printf("Insert the number of seconds: ") ;
	scanf("%d", &inSeconds) ;

	while (inSeconds >= 60*60*24*7) {
		inSeconds -= 60*60*24*7 ;
		weeks++ ;
	}
	
	while (inSeconds >= 60*60*24) {
		inSeconds -= 60*60*24 ;
		days++ ;
	}
	
	while (inSeconds >= 60*60) {
		inSeconds -= 60*60 ;
		hours++ ;
	}

	while (inSeconds >= 60) {
		inSeconds -= 60 ;
		minutes++ ;
	}
	printf("\nWeeks: %d\nDays: %d\nHours: %d\nMinutes: %d\nSeconds: %d\n", weeks, days, hours, minutes, inSeconds);

	return 0 ;
}
