Algoritmo TP7_EJ26
	REC = 0
	DIMENSION VPRE[5]
	DIMENSION VART[5]
	// LOTE DE CARGA
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Leer ART, PRE
		VPRE[ART-1] = PRE
	FinPara
	DIMENSION vPTOA[5]
	PONERVECTORCERO[vPTOA,5]
	// LOTE DE VENTAS
	Leer ART, SUC, CV
	Mientras ART != 0 Hacer
		// PROCESO REGISTROS VENTAS
		VPTOA[ART-1] = VPTOA[ART-1] + CV
		PRE = VPRE[ART-1]
		REC = REC + PRE*CV
		Escribir "PRE", PRE
		Leer ART, SUC, CV
	FinMientras
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Escribir "ART. ", i + 1, " vendio ", VPTOA[i]
	FinPara
	Escribir "REC TOTAL: ",REC
FinAlgoritmo

Funcion PONERVECTORCERO(v,t)
	Para i<-0 Hasta t-1 Con Paso 1 Hacer
		v[i] = 0
	FinPara
FinFuncion
