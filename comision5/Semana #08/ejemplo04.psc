Algoritmo ejemplo04
	Leer codDestino
	cantTotal = 0
	Mientras codDestino != 0 Hacer
		anterior = codDestino
		totalRec = 0
		Mientras codDestino == anterior Hacer
			Leer nroMes, cantPas, rec
			////// REGISTROS
			cantTotal = cantTotal + cantPas
			totalRec = totalRec + rec
			Leer codDestino
		FinMientras
		Escribir "Cod destino: ", anterior
		Escribir "Total $: ", totalRec
	FinMientras
	Escribir "Cantidad total pasajes: ", cantTotal
FinAlgoritmo
