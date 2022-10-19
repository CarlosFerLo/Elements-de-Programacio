const sumDiv =  (n) => {
	let suma = 1 ;
	for (let i = 2; i < n; i++) if (n % i == 0) suma += i ;
	return suma ;
}

const numAmigos = (n) => {
	let counter = 1 ;
	for (let k = 1; k < n; k++) {
		let aux = sumDiv (k) ;
		if (aux < k && sumDiv(aux)  == k) console.log(`${counter++}: ${aux} , ${k}`) ;
	}   
}

numAmigos (3000) ;

