#include <stdio.h>
#include<math.h>
float DerivAdelante(float h, float(xi));
float DerivaAtras(float h, float(xi));
float DerivaCentrado(float h, float(xi));
float xi,h,error1,error2,error3;
int main()
{
    xi=0.6; h=0.1;
    error1 = fabs((0.2489-DerivAdelante(xi,h))/0.2489)*100;
    error2 = fabs((0.2489-DerivaAtras(xi,h))/0.2489)*100;
    error3 = fabs((0.2489-DerivaCentrado(xi,h))/0.2489)*100;
  /////////////////////////////////////////////////////////////////////////////////////
    printf("Bienvenido, calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6\n\n");
    printf("El valor para h=%f hacia adelante es: %f, con un error realtivo del %f %% \n",h,DerivAdelante(xi,h),error1);
    printf("El valor para h=%f hacia atras es: %f, con un error relativo del %f %%\n",h,DerivaAtras(xi,h),error2);
    printf("El valor para h=%f Centrado es: %f, con un error relativo del %f %%",h,DerivaCentrado(xi,h),error3);
}
float DerivAdelante(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,error1;
    xi=0.6; h=0.1;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+(2*h))/0.2);
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    return dfxi;
}
float DerivaAtras(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,error2;
    xi=0.6; h=0.1;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi-h)/0.2);
    fxip2 = 1-exp(-(xi-(2*h))/0.2);
    dfxi = (3*fxi-4*fxip1+fxip2)/(2*h);
    return dfxi;
}
float DerivaCentrado(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,fxip3,fxip4,error3;
    xi=0.6; h=0.1;
    fxi = 1-exp(-xi/0.2);
    fxip1 = 1-exp(-(xi+h)/0.2);
    fxip2 = 1-exp(-(xi+(2*h))/0.2);
    fxip3 = 1-exp(-(xi-h)/0.2);
    fxip4 = 1-exp(-(xi-(2*h))/0.2);
    dfxi = (-fxip2+8*fxip1-8*fxip3+fxip4)/(12*h);
    return dfxi;
}
