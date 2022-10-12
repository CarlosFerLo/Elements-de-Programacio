function sAsdhms (sec) {
	let min = 0 ;
	let hor = 0 ;
	let dias = 0 ;
	let semanas = 0 ; 	

	while (sec >= 60*60*24*7) {
		sec -= 60*60*24*7 ;
		semanas++ ;
	}

	while (sec >= 60*60*24) {
		sec -= 60*60*24 ;
		dias++ ;
	}

	while (sec >= 60*60) {
		sec -= 60*60 ;
		hor++ ;
	}

	while (sec >= 60) {
		sec -= 60 ;
		min++ ;
	}

	console.log("\nWeeks: ", semanas, "\nDays: ", dias, "\nHoras: ", hor, "\nMinutos: ", min, "\nSegundos: ", sec) ;
}

sAsdhms (3600) ;
