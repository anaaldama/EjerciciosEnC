//Ana Aldama 24/03/2021
Algoritmo ejer1
	//Volumen del cilindro
	Definir D, H, R, PI2, V como real;
	D<-0; H<-0; R<-0; v<-0;
	PI2 = 3.141593;
	
	Escribir "Introduzca el diámetro en Mts.";
	Leer D;
	Escribir "Introduzca la altura en Mts.";
	Leer H;
	
	R <- D/2;
	V <- PI2 * (R ^ 2) * H;
	
	Escribir "El volumen del cilindro es de ", V," metros cúbicos";
FinAlgoritmo
