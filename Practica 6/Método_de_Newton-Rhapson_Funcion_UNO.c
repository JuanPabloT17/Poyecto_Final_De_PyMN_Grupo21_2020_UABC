#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double);
double g(double);
int main()
{
    int imax,iter;
    double xi,xd,ea,em,test,xa,xaold;
    printf("\nMETODO DE NEWTON RHAPSON\n\n");
    printf("Introduce el valor inicial\n");
    scanf("%lf",&xi);
    printf("Introduce el numero de iteraciones maximas\n");
    scanf("%d",&imax);
    printf("Introduce el error minimo del calculo\n");
    scanf("%lf",&em);
iter=0;
xa=0.3;
if(f(xi)==0)
    printf("No hay raiz en ese intervalo\n");
else{
  printf("\nI      xi       Error aprox\n");
  do{
    iter++;
    xaold=xa;
    xa=xi-f(xi)/g(xi);
    ea=fabs((xa-xaold)/xa)*100;

    xi=xa;

    printf("\n%d    %lf    %lf           ",iter,xa,ea);
  } while(ea>em && iter<imax);
}
    return 0;
}
double f(double x)

{
    return (8*sin(x)*exp(-x))-1;
}
double g(double x)
{
    return (8*exp(-x)*cos(x))-(8*exp(-x)*sin(x));
}
