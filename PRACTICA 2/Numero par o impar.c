// Numero par o impar.
#include<stdio.h>

int main(){
	int num,res;
	printf("Ingrese un numero entero positivo");
	scanf("%d",&num);
	res=num%2;
	if (res==0){
		
		printf("El numero es par\n");
	}
	else{
		printf("El numero es impar\n");
	}
	
	return 0;
}
