Algoritmo TEMA01_EJ02_B
	min = 999999
	Leer suc,dia,imp,env,mp
	Mientras suc!=0 Hacer
		ant = suc
		rec = 0
		Mientras suc==ant Hacer
			///// PROCESO CADA VENTA
			rec = rec +imp
			Leer suc,dia,imp,env,mp
		FinMientras
		Si rec < min Entonces
			min = rec
			sucmin = ant
		FinSi
	FinMientras
	Escribir "La sucursal con menor recaudacion total fue: ", sucmin
FinAlgoritmo
