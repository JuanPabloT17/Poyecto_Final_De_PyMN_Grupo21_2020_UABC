#include <stdio.h>
int main(){
	long long int numero, i, x=0, y=1,z=1, segundo, j, a=0, b=1, c=1;
float fibonacci;
	printf("Numero de elementos de la primera serie:");
	scanf("%lli",&numero);

	printf("1,");

	for (i=1;i<numero;i++) {
		z=x+y;
		x=y;
		y=z;
		printf("%lli,",z);
	}
	printf("\nIngrese el numero anterior al que ingreso para calcular aproximidad al numero aureo :");
	scanf("%lli",& segundo);

	printf("1,");

  for (j=1;j< segundo;j++) {
		c=a+b;
		a=b;
		b=c;
		printf("%lli,",c);
	}

  printf ("\nPor lo tanto el numero aureo sera:");
  fibonacci = ((float) z) / c;
printf ("%f",fibonacci);
}
