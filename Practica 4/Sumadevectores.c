#include <stdio.h>
int w[3];

void suma(int v[3], int u[3]){
    int i;
    for(i=0; i<3; i++)
    {
       w[i]=v[i]+u[i];
    }
}
int main(){
    int v[3], i,j;
    int u[3];
    for(i=0; i<3; i++)
    {
    printf("ingrese los valores del vector 1:");
    scanf("%i", &v[i]);
    }
    for(i=0; i<3; i++)
    {
    printf("ingrese los valores del vector 2:");
    scanf("%i", &u[i]);
    }
    suma(v,u);

    printf("El resultado de la suma del vector v y u es\n");
    for(i=0; i<3; i++)
    {
        printf("Valor %i del vector w es =%i\n", i, w[i]);
    }

    return 0;
}
