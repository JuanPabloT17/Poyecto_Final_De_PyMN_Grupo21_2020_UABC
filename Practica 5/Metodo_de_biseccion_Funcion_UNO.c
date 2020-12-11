#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double);
int main()
{
    int imax,iter;
    double xi,xd,ea,em,test,xa,xaold;
    printf("\nMETODO DE BISECCION\n\n");

    printf("Introduce el valor A del intervalo\n");
    scanf("%lf",&xi);
    printf("Introduce el valor B del intervalo\n");
    scanf("%lf",&xd);
    printf("Introduce el numero de iteraciones maximas\n");
    scanf("%d",&imax);
    printf("Introduce el error minimo del calculo\n");
    scanf("%lf",&em);
iter=0;
xa=0;
if(f(xi)*f(xd)>0)
    printf("No hay raiz en ese intervalo\n");
else{
  printf("\nI       A           B             xi          Error aprox\n");
  do{
    iter++;
    xaold=xa;
    xa=(xi+xd)/2;
    ea=fabs((xa-xaold)/xa)*100;
    test=f(xi)*f(xa);
    if(test<0)
        xd=xa;
    else if(test >0)
        xi=xa;
    else
        ea=0;
    printf("\n%d    %lf    %lf       %lf      %lf    ",iter,xi,xd,xa,ea);
  } while(ea>em && iter<imax);
}
    return 0;
}
double f(double x)
{
    return (2*x*cos(2*x))-pow(x+1,2);
}
