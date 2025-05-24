Algoritmo tema1_ej2
	cip = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		Leer num
		cn = 0;
		ord = 1
		cp = 0; ci = 0
		Mientras num != 0 Hacer
			// PROCESO NUMEROS
			cn = cn + 1
			Si (n > 0) && ( num % 2 != 0) Entonces
				cip = cip + 1
			FinSi
			Si cn > 1 Entonces
				Si num > ant Entonces
					ord = 0
				FinSi
			FinSi
			ant = num
			Si num % 2 == 0 Entonces
				cp = cp + 1
				Si cp==1 Entonces
					maxpar = num
				SiNo
					Si num > maxpar Entonces
						maxpar = num
					FinSi
				FinSi
			SiNo
				ci = ci + 1
				Si ci == 1 Entonces
					minimpar = num
				SiNo
					Si num < minimp Entonces
						minimpar = num
					FinSi
				FinSi
			FinSi
			Leer num
		FinMientras
		Si ord == 1 Entonces
			Escribir "PTO A) ORD"
		FinSi
		Escribir "PTO C) ", maxpar, minimpar
	FinPara
	Escribir "PTO B) ", cip
FinAlgoritmo
