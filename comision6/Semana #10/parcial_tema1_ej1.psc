Algoritmo tema1_ej1
	max = 0
	q1 = 0; q2 = 0
	Leer suc, dia, imp, fp
	Mientras suc != 0 Hacer
		ant = suc
		fp1 = 0; fp2 = 0; fp3 = 0
		Mientras suc == ant Hacer
			// PROCESO VENTAS
			Si imp > max Entonces
				max = imp
				maxsuc = suc
				maxdia = dia
			FinSi
			Si fp==1 Entonces
				fp1 = fp1 + imp
			SiNo
				Si fp == 2 Entonces
					fp2 = fp2 + imp
				SiNo
					fp3 = fp3 + imp
				FinSi
			FinSi
			Si dia <= 15 Entonces
				q1 = q1 + imp
			SiNo
				q2 = q2 + imp
			FinSi
			Leer suc, dia, imp, fp
		FinMientras
		t = fp1 +fp2 +fp3
		pr1 = (fp1/t)*100
		pr2 = (fp2/t)*100
		pr3 = (fp3/t)*100
		Escribir "PTO B) ", pr1, pr2, pr3
	FinMientras
	Escribir "PTO A) ", max, maxsuc, maxdia
	Escribir "PTO C) ", q1, q2
FinAlgoritmo
