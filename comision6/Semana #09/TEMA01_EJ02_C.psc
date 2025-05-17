Algoritmo TEMA01_EJ02_C
	Leer suc, dia, imp, env, mp
	Mientras suc != 0 Hacer
		ant = suc
		rec1 = 0; rec2 = 0; rec3 = 0
		Mientras suc == ant Hacer
			///// PROCESO CADA VENTA
			Si mp==1 Entonces
				rec1 = rec1 + imp
			SiNo
				Si mp==2 Entonces
					rec2 = rec2 + imp
				SiNo
					rec3 = rec3 + imp
				FinSi
			FinSi
			Leer suc, dia, imp, env, mp
		FinMientras
	total = rec1 + rec2 + rec3
	porc1 = (rec1/total)*100
	porc2 = (rec2/total)*100
	porc3 = (rec3/total)*100
		Escribir "La sucursal ", ant, " recaudo: "
		Escribir "En efectivo: ", porc1, "%"
		Escribir "En debito: ", porc2, "%"
		Escribir "En credito: ", porc3, "%"
	FinMientras
FinAlgoritmo
