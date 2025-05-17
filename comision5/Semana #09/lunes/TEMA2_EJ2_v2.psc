Algoritmo TEMA2_EJ2_v2
	// TOTAL
	tgpc = 0; cgna = 0
	Para i<-1 Hasta 3 Con Paso 1 Hacer
		// GR X GR
		Leer num
		cp = 0; cpc = 0; bprimo = 0;  cneg = 0; cpos = 0; balter = 1 
		Mientras num!=0 Hacer
			// PTO A)
			Si num%2==0 Entonces
				cp = cp+1
				Si cp==1 Entonces
					min = num
					max = num
				SiNo
					Si num<min Entonces
						min = num
					SiNo
						Si num>max Entonces
							max = num
						FinSi
					FinSi
				FinSi
			FinSi
			// PROCESO NUMEROS
			// PTO B)
			cd = 0
			Para x<-1 Hasta num Con Paso 1 Hacer
				Si num%x == 0 Entonces
					cd = cd+1
				FinSi
			FinPara
			Si cd==2 Entonces
				cpc = cpc + 1
			SiNo
				cpc = 0
			FinSi
			Si cpc == 2 Entonces
				bprimo = 1
			FinSi
			// PTO C)
			Si num > 0 Entonces
				cpos = cpos +1
				cneg = 0
			SiNo
				cneg = cneg + 1
				cpos = 0
			FinSi
			Si (cpos == 2) || (cneg == 2) Entonces
				balter = 0
			FinSi
			Leer num
		FinMientras
		Escribir 'El minimo par: ',min
		Escribir 'El maximo par: ',max
		Si bprimo == 1 Entonces
			tgpc = tgpc + 1
		FinSi
		Si balter == 1 Entonces
			cgna = cgna + 1
		FinSi
		// GR X GR
	FinPara
	// TOTAL
	Escribir "Total de grupos 2 prim. cons. ",tgpc
	Escribir "Total de grupos alternados pos y neg. ",cgna
	esperar tecla
FinAlgoritmo
