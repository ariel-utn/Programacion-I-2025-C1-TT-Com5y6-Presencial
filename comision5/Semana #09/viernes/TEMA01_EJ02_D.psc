Algoritmo TEMA01_EJ02_D
	rectotal = 0
	Leer suc,dia,imp,env,mp
	Mientras suc!=0 Hacer
		ant = suc
		Mientras suc==ant Hacer
			///// PROCESO CADA VENTA
			Si (dia <= 15) && (env == 1) Entonces
				rectotal = rectotal +imp
			FinSi
			Leer suc,dia,imp,env,mp
		FinMientras
	FinMientras
	Escribir rectotal
FinAlgoritmo
