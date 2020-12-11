//Calcular la fuerza de atracción del peso de una persona  =  dada su masa  y laconstante gravitatoria 

#include <stdio.h>

int main(){
	float Fuerza_atraccion, Gravedad, masa;
	printf ("Ingrese su peso(masa)");
	scanf ("%f",&masa);
	Gravedad=9.8;
	Fuerza_atraccion = (masa*Gravedad);
	printf ("\nSu fuerza de atraccion(W) es de: %.2f", Fuerza_atraccion);
	
	return 0;
}
