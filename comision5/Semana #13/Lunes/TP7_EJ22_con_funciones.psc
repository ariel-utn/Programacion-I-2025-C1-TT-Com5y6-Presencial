Algoritmo TP7_EJ22_con_funciones
	acu = 0
	Dimension ventas[4]
	ponerVectorCero(ventas,4)
	Leer ART,CV
	Mientras ART!=0 Hacer
		ventas[ART-1]=ventas[ART-1]+1
		Si ART==2 Entonces
			acu = acu+CV
		FinSi
		Leer ART,CV
	FinMientras
	artmax = indiceValorMaximo(ventas,4)
	Escribir 'El articulo mas vendido fue: ',artmax+1
	mostrarArticulosSinVentas(ventas,4)
	Escribir 'Cantidad vendida articulo 2: ',acu
FinAlgoritmo

Funcion ponerVectorCero(v,t)
	Para i<-0 Hasta t-1 Con Paso 1 Hacer
		v[i] = 0
	FinPara
FinFuncion

Funcion r = indiceValorMaximo(v,t)
	max = 0
	Para i<-1 Hasta t-1 Con Paso 0 Hacer
		Si v[i]>max Entonces
			max = v[i]
			indiceMax = i
		FinSi
	FinPara
	r = indiceMax
FinFuncion

Funcion mostrarArticulosSinVentas(v,t)
	Para i<-0 Hasta t-1 Con Paso 1 Hacer
		Si v[i]==0 Entonces
			Escribir "El art. ", i + 1, " no tuvo ventas"
		FinSi
	FinPara
FinFuncion
