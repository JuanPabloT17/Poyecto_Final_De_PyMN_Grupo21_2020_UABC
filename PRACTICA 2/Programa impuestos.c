// Programa Impuestos
#include <stdio.h>

int main(){
int i,bin;
i=0;
printf("Indique el numero a conocer su residuo binario" );
scanf("%i",&i );
while (i!=0) {
	bin= i%2;
	i= bin%2;

	printf("%i\n",bin );
}
}
