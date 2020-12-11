#include <stdio.h>
int Aux(int v[3]){
    int i, suma=0;
    for(i=0; i<3; i++)
    {
       suma=suma+v[i];
    }
  return suma;
}
int main(){
    int v[3], i, suma;
    for(i=0; i<3; i++)
    {
    printf("ingrese los valores del vector:", i);
    scanf("%i", &v[i]);
    }

    suma= Aux(v);

    printf("La suma de los valores del vector es: %i", suma);
}
