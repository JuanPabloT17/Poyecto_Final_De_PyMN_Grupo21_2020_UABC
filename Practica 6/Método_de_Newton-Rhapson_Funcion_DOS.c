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
    return  2*pow(x,3)- (11)*pow(x,2)+ 17.7 *x - 5;
}
double g(double x)
{
    return  6*pow(x,2)- 22* x + 17.7;
}
