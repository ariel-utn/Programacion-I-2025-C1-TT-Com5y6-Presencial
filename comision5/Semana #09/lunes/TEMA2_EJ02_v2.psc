Algoritmo TEMA2_EJ02_v2
	bminrec = falso
	Q1 = 0; Q2 = 0
	max = 0
	Leer INT,DIA,REC,CPT,CV
	Mientras INT!=0 Hacer
		ANT = INT
		acuViajes = 0
		rectotal = 0
		Mientras INT==ANT Hacer
			// PROCESO VIAJES
			Si DIA<=15 Entonces
				acuViajes = acuViajes+CV
				Q1 = Q1+CPT
			SiNo
				Q2 = Q2+CPT
			FinSi
			rectotal = rectotal+REC
			Si (REC < minrec) || (bminrec == falso) Entonces
				minrec = REC
				mindia = DIA
				minint = INT
				bminrec = verdadero
			FinSi
			Leer INT,DIA,REC,CPT,CV
		FinMientras
		Si acuViajes>max Entonces
			max = acuViajes
			maxInt = ANT
		FinSi
		Escribir 'El interno ',ANT,' recaudo $: ',rectotal
	FinMientras
	Escribir 'El interno con mayor cant. viajes es: ',maxInt
	Si Q1>Q2 Entonces
		Escribir ' La quincena 1 fue la que mayor pasajeros transporto'
	SiNo
		Escribir ' La quincena 2 fue la que mayor pasajeros transporto'
	FinSi
	Escribir 'El interno de menor rec: ',minint,' con $: ',minrec,' del dia ',mindia
FinAlgoritmo
