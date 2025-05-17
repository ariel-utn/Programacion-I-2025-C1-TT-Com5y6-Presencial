Algoritmo TEMA01_EJ02_A
	Leer suc,dia,imp,env,mp
	Mientras suc!=0 Hacer
		ant = suc
		cv = 0
		Mientras suc==ant Hacer
			cv = cv + 1
			///// PROCESO CADA VENTA
			Si cv == 1 Entonces
				max1 = imp
				d1 = dia
				max2 = imp
				d2 = dia
			SiNo
				Si imp > max1 Entonces
					max2 = max1
					d2 = d1
					max1 = imp
					dia1 = dia
				SiNo
					Si (imp > max2) || (cv==2) Entonces
						max2 = imp
						d2 = dia
					FinSi
				FinSi
			FinSi
			Leer suc,dia,imp,env,mp
		FinMientras
		Escribir "MAX1: ", max1, " en el dia: ", d1, "MAX2: ", max2, " en el dia: ", d2
	FinMientras
	Escribir 'La sucursal con menor recaudacion total fue: ',sucmin
FinAlgoritmo
