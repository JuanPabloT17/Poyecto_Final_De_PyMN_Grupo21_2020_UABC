//FORMULA GENERAL
#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,x1,x2,R;
	printf("Introduzca el valor de A de la ecuacion de segundo grado");
	scanf("%lf",&a);
	printf("Introduzca el valor de B de la ecuacion de segundo grado");
	scanf("%lf",&b);
	printf("Introduzca el valor de C de la ecuacion de segundo grado");
	scanf("%lf",&c);
	
	R= pow(b,2)-4*a*c;
	
	x1= -b+sqrt(R)/(2*a);
	x2= -b-sqrt(R)/(2*a);
	
	if (R<0){
		printf ("Error:Las soluciones no son relaes\n");
		
	}
	else {
		printf("Las soluciones de la cuadratica son: %1.1lf,\t %1.1lf", x1,x2);
	}
}

