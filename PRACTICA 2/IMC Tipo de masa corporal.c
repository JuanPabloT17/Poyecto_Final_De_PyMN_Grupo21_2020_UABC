// Estado del peso actual IMC

#include <stdio.h>
#include <math.h>

int main(){
	char opcion;
	float estatura,peso, imc;
	printf("Hola buen dia\n");
	printf("Ingrese su peso(kg)\n");
	scanf("%f" ,&peso);
	printf("Cual es su estatura(m)\n");
	scanf("%f" ,&estatura);
	
	imc=  peso/ pow(estatura,2);
	printf("\nSu indice de masa corporal es de: %f",imc);

	if(imc<18.5){
		printf("\nUsted tiene un peso bajo");	
	}
	else if (imc >18.8 && imc<24.9){
	printf("\nUsted tiene un peso normal");
	
    }
    if(imc >25 && imc<29.9){
		printf("\nUsted tiene sobrepeso");	
	}
	else if (imc >30 && imc<34.9){
	    printf("\nUsted tiene obesisad tipo 1");
    }
	if(imc >35 && imc<39.9){
		printf("\nUsted tiene obesidad tipo 2");	
	}
	else if (imc >40){
	    printf("\nUsted tiene hiper obesidad");
    }
	
     return 0;
}

