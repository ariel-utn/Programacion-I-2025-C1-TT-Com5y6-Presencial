Algoritmo TEMA2_EJ2
	// TOTAL
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		// GR X GR
		Leer num
		cn = 0; ci = 0
		Mientras num!=0 Hacer
			Si num%2==0 Entonces
				cn = cn+1
				Si cn==1 Entonces
					min = num
				SiNo
					Si num < min Entonces
						min = num
					FinSi
				FinSi
			SiNo
				ci = ci+1
				Si ci==1 Entonces
					max = num
				SiNo
					Si num> max Entonces
						max = num
					FinSi
				FinSi
			FinSi
			// PROCESO NUMEROS
			Leer num
		FinMientras
		Escribir 'El minimo par: ', min
		Escribir "El maximo impar: ", max
		// GR X GR
	FinPara
	// TOTAL
FinAlgoritmo
