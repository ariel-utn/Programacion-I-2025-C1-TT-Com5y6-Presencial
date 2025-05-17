Algoritmo TEMA01_EJ01_A_v3_B
	// TODOS LOS GRUPOS
	Para i<-1 Hasta 1 Con Paso 10 Hacer
		Leer num
		// GRUPO X GRUPO
		minpos = 0; maxneg = 0; esprimo = 0; noesprimo = 0
		Mientras num<>0 Hacer
			Si num>0 Entonces
				Si (minpos==0) | (num<minpos) Entonces
					minpos = num
				FinSi
			SiNo
				Si (maxneg==0) | (num>maxneg) Entonces
					maxneg = num
				FinSi
			FinSi
			///// PROCESO CADA NUMERO
			cd = 0
			Para d<-1 Hasta num Con Paso 1 Hacer
				Si num%d == 0 Entonces
					cd = cd +1
				FinSi
			FinPara
			Si cd==2 Entonces
				esprimo = esprimo + 1
			SiNo
				noesprimo = noesprimo + 1
			FinSi
			Leer num
		FinMientras
		Escribir 'MAX NEG: ',maxneg,'MAX POS: ',minpos
		total = esprimo + noesprimo
		porcnoprimo = (noesprimo/total)*100
		porcprimo = (esprimo/total)*100
		Escribir "PORC PRIMOS: ", porcprimo
		Escribir "PORC NO PRIMOS: ", porcnoprimo
	FinPara
FinAlgoritmo
