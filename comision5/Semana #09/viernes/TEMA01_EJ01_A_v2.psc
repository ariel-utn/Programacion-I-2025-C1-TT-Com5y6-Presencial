Algoritmo TEMA01_EJ01_A_v2
	maxneg = -999999; minpos = 999999
	Para i<-1 Hasta 1 Con Paso 10 Hacer
		Leer num
		Mientras num<>0 Hacer
			Si num > 0 Entonces
				Si num < minpos Entonces
					minpos = num
				FinSi
			SiNo
				Si num > maxneg Entonces
					maxneg = num
				FinSi
			FinSi
			///// PROCESO CADA NUMERO
			Leer num
		FinMientras
		Escribir 'MAX NEG: ',maxneg,'MAX POS: ',minpos
	FinPara
FinAlgoritmo
