Algoritmo TEMA01_EJ01_C
	cp = 0
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Leer num
		Mientras num!=0 Hacer
			///// PROCESO CADA NUMERO
			Si num%2==0 Entonces
				cp = cp +1
			FinSi
			Leer num
		FinMientras
	FinPara
	Escribir "Total de numeros pares: ", cp
FinAlgoritmo
