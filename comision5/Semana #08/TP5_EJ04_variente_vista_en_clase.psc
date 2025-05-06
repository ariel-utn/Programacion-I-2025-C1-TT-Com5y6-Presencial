Algoritmo TP5_EJ04
	totalpos = 0
	Para gr<-1 Hasta 3 Con Paso 1 Hacer
		Escribir "GRUPO Nro: ", gr
		Leer num
		cpar = 0; cimpar = 0; total = 0; cpos = 0; cneg = 0
		Mientras num != 0 Hacer
			total = total +1
			Si num%2 == 0 Entonces
				cpar = cpar + 1
				Si cpar == 1 Entonces
					minPar = num
				SiNo
					Si num < minPar Entonces
						minPar = num
					FinSi
				FinSi
			SiNo
				cimpar = cimpar + 1
				Si cimpar == 1 Entonces
					maxImpar = num
				SiNo
					Si num > maxImpar Entonces
						maxImpar = num
					FinSi
				FinSi
			FinSi
			// PROCESO NUMERITOS TODOS!!!
			Si num > 0 Entonces
				cpos = cpos +1
				totalpos = totalpos + 1
			SiNo
				cneg = cneg + 1
			FinSi
			Leer num
		FinMientras
		Escribir "total: ", total
		Si cpar == 0 Entonces
			Escribir "Grupo sin par"
		SiNo
			Escribir "MINIMO PAR: ", minPar
		FinSi
		Si cimpar == 0 Entonces
			Escribir "Grupo sin impar"
		SiNo
			Escribir "MAXIMO IMPAR: ", maxImpar
		FinSi
		porcpos = (cpos*100)/total
		porcneg = (cneg*100)/total
		Escribir "PORC. POS: ", porcpos, "%"
		Escribir "PORC. NEG: ", porcneg, "%"
	FinPara
	Escribir "Total de positivos: ", totalpos
FinAlgoritmo
