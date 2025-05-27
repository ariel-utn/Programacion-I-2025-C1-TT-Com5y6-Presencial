Algoritmo tp06_ej03_ej04
	Para i<-1 Hasta 120 Con Paso 1 Hacer
		r = esPrimoSophieGermain(i)
		Si r==1 Entonces
			Escribir i
		FinSi
	FinPara
FinAlgoritmo

Funcion r = esPrimo(n)
	cd = 0
	Para i<-1 Hasta n Con Paso 1 Hacer
		Si n%i==0 Entonces
			cd = cd+1
		FinSi
	FinPara
	Si cd==2 Entonces
		r = 1
	SiNo
		r = 0
	FinSi
FinFuncion

Funcion r = esPrimoSophieGermain(n)
	r1 = esprimo(n)
	r2 = esprimo(n*2+1)
	Si (r1==1)&&(r2==1) Entonces
		r = 1
	SiNo
		r = 0
	FinSi
FinFuncion
