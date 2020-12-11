#include <stdio.h>
#include <stdlib.h>
void funcion (int opcion);
int seleccion;

int main (){
printf ("Por favor ingrese una opcion\n");
printf("1 imprimir arreglo, 2 salir");
scanf("%i",& seleccion);
funcion ( seleccion);
}
void funcion (int opcion){
int i,j;
int v[3][3];
for (i = 0; i<3; i++){
  for (j = 0; j<3; j++){
    v[i][j]=rand() % 1000;
}
}
if (opcion==1) {
printf("Los valores del arreglo:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++){
        printf("%i,", v[i][j]);
        }
         printf("\n");
    }
  }
}
