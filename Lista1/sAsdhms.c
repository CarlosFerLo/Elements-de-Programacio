#include <stdio.h>


int main (void) {
	
	int inSeconds ;
	int weeks = 0, days = 0, hours = 0, minutes = 0 ;

	printf("Insert the number of seconds: ") ;
	scanf("%d", &inSeconds) ;

	 weeks = inSeconds / (60*60*24*7) ;
        inSeconds %= 60*60*24*7 ;

        days = inSeconds / (60*60*24) ;
        inSeconds %= 60*60*24 ;

        hours = inSeconds / (60 * 60) ;
        inSeconds %= 60*60 ;

        minutes = inSeconds / 60 ;
        inSeconds %= 60 ;
	
	printf("\nWeeks: %d\nDays: %d\nHours: %d\nMinutes: %d\nSeconds: %d\n", weeks, days, hours, minutes, inSeconds);

	return 0 ;
}
