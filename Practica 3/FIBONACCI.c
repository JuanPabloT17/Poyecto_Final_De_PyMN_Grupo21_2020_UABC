#include <stdio.h>
int main(){
	  long long int numero, i, x=0, y=1,z=1;
	printf("Numero de elementos de la serie:");
	scanf("%lli",&numero);

	printf("1,");

	for (i=1;i<numero;i++) {
		 z=x+y;
		 x=y;
	 	 y=z;
		 printf ("%lli,",z);
	}
}
