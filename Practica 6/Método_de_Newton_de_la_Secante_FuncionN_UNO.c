#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double);
int main()
{
    int imax,iter;
    double xi,xd,ea,em,test,xa,xaold,d;
    printf("\nMETODO DE LA SECANTE\n\n");
    printf("Introduce el valor X-1\n");
    scanf("%lf",&xi);
    printf("Introduce el valor X0\n");
    scanf("%lf",&xd);
    printf("Introduce el numero de iteraciones maximas\n");
    scanf("%d",&imax);
    printf("Introduce el error minimo del calculo\n");
    scanf("%lf",&em);
iter=0;
xa=0.3;

if(f(xi)==0)
    printf("No hay raiz en ese intervalo\n");
else{
  printf("\nI      xi           x-1           x+1             f(x-1)          f(xi)        f'(xi)       Error aprox\n");
  do{

    iter++;
    xaold=xa;
    xa=xd-(f(xd)*(xi-xd))/(f(xi)-f(xd));
    ea=fabs((xa-xaold)/xa)*100;
    d= (f(xi)-f(xd))/(xi-xd);

    printf("\n%d    %lf     %lf        %lf       %lf          %lf       %lf        %lf ",iter,xd,xi,xa,f(xi),f(xd),d,ea);
    xi=xd;
    xd=xa;
  } while(ea>em && iter<imax);
}
    return 0;
}
double f(double x)

{
    return (8*sin(x)*exp(-x))-1;
}
