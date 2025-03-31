Algoritmo tp01_ej04
	Escribir "Ingrese asientos totales y asientos ocupados: "
	Leer asientosTotales, asientosOcupados
	porcOcupacion = (asientosOcupados*100)/asientosTotales
	porcNoOcupacion = 100 - porcOcupacion
	Escribir "Porc Ocup: ", porcOcupacion,"%"
	Escribir "Porc No ocup: ", porcNoOcupacion,"%"
FinAlgoritmo
