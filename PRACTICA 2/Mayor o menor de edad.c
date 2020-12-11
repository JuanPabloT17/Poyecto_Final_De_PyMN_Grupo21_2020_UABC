// Programa mayor de edad
#include<stdio.h>

int main(){
	int edad;
	printf("Hola, Porfavor Ingrese su edad");
	scanf("%d",&edad);
	printf("Tu edad es %i años.\n",edad);
	if (edad>=18){
		
		printf("Eres mayor de edad.\n");
	}
	else{
		printf("Eres menor de edad.\n");
	}
	
	return 0;
}
