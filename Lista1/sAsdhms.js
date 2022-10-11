let sec;

function sAsdhms (sec) {
	let min = 0 ;
	let hor = 0 ;
	let dias = 0 ;
	let semanas = 0 ; 	

	semanas = sec / (60*60*24*7) ;
	sec %= 60*60*24*7 ;

	dias = sec / (60*60*24) ;
	sec %= 60*60*24 ;

	hor = sec / (60*60) ;
	sec %= 60*60 ;

	min = sec / 60 ;
	sec %= 60 ;

	console.log("\nWeeks: ", semanas, "\nDays: ", dias, "\nHoras: ", hor, "\nMinutos: ", min, "\nSegundos: ", sec) ;
}

sAsdhms (3600) ;
