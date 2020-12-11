/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
int b;
char departamento,dec;
float importe,total;
printf("Hola, buen dia, en que departamento realizara sus compras\n");
printf("\n(Perfumeria)=p, (salchichoneria)=h, (carniceria)=c,(limpieza)=l");
scanf("%s",&departamento);
printf("\nIngrese el total de su compra");
scanf("%f",&total);
printf("\nDesea llevar bolsas (si)=s,(no)=n");
scanf("%s",&dec);
if (dec=='s'){
	printf("\nCuantas bolsas desea llevar");
	scanf("%i",&b);
}
else { b=0; }
switch (departamento){
	case 'p': importe = (total-(total*0.20))+(0.10*b);
	printf("Su total a pagar es: %8.2f",importe);break;
	case 'h': importe = (total-(total*0.40))+(0.10*b);
	printf("Su total a pagar es: %8.2f",importe);break;
	case 'c': importe = (total-(total*0.20))+(0.10*b);
	printf("Su total a pagar es: %8.2f",importe);break;
	case 'l': importe = (total-(total*0.35))+(0.10*b);
	printf("Su total a pagar es: %8.2f",importe);break;
}
}
