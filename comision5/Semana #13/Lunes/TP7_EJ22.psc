Algoritmo sin_titulo
	acu = 0
	dimension ventas[4]
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		ventas[i] = 0
	FinPara
	Leer ART, CV
	Mientras ART != 0 Hacer
		ventas[ART-1] = ventas[ART-1] +1
		Si ART==2 Entonces
			acu = acu + cv
		FinSi
		Leer ART, CV
	FinMientras
	max = 0
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		Si ventas[i] > max Entonces
			max = ventas[i]
			artmax =  i + 1
		FinSi
	FinPara
	Escribir "El articulo mas vendido fue: ", artmax
	Para i<-0 Hasta 3 Con Paso 1 Hacer
		Si ventas[i]== 0 Entonces
			Escribir "El art. " i + 1, " no tuvo ventas"
		FinSi
	FinPara
	Escribir "Cantidad vendida articulo 2: ", acu
FinAlgoritmo
