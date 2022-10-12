function esfera (rad) {
	if (rad < 0) {
		rad = -rad ;
	}

	console.log("\nArea: ", 2 * 3.141592 * rad, "\nVolumen: ", 3.141592 * rad * rad) ;
}

esfera (1) ;
esfera (-2) ;

