// El usuario ingresa el radio de una esfera y se calculará su volume Imprimir un mensaje con el volumen calculado en pantalla. Definir el volumen como una constante.

#include <stdio.h>
#include <math.h>

int main(){
	float Rad,Volumen;
	printf ("ingrese radio de la esfera");
	scanf ("%f", &Rad);
	Volumen = (4* M_PI * pow(Rad,3))/3;
	printf ("El volumen de la esfera es: %.2f", Volumen);
	
	return 0;
}
