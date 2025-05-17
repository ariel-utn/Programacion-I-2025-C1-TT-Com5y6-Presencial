Algoritmo TEMA01_EJ01_A_v1
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		cp = 0; cn = 0
		Mientras num<>0 Hacer
			Si num>0 Entonces
				cp = cp+1
				Si cp==1 Entonces
					minpos = num
				SiNo
					Si num<minpos Entonces
						minpos = num
					FinSi
				FinSi
			SiNo
				cn = cn+1
				Si cn==1 Entonces
					maxneg = num
				SiNo
					Si num>maxneg Entonces
						maxneg = num
					FinSi
				FinSi
			FinSi
			///// PROCESO CADA NUMERO
			Leer num
		FinMientras
		Escribir 'MAX NEG: ',maxneg,'MAX POS: ',minpos
	FinPara
FinAlgoritmo
