Algoritmo ejemploWhile
	cpar = 0
	Leer num
	Mientras num != 0 Hacer
		Si num%2==0 Entonces
			cpar = cpar + 1
		FinSi
		Leer num
	FinMientras
	// UNA SOLA VEZ
	Escribir "TOTAL DE PARES: ", cpar
FinAlgoritmo
