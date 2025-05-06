Algoritmo EJEMPLO03
	Leer codDestino
	// TOTAL GRUPOS
	tpv = 0
	Mientras codDestino != 0 Hacer
		// GRUPO X GRUPO
		totalRec = 0
		Para i<-1 Hasta 12 Con Paso 1 Hacer
			Leer nroMes, cantPas, Rec
			////// PROCESO UN DESTINO TURISTICO X MES
			tpv = tpv + cantPas
			totalRec = totalRec + rec
			Leer codDestino
		FinPara
		// GRUPO X GRUPO
		Escribir "Total rec $: ", totalRec
	FinMientras
	// TOTAL GRUPOS
	Escribir "Total pasajes vendidos: ", tpv
FinAlgoritmo
