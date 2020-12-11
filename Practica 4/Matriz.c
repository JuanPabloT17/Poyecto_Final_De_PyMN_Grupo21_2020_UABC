#include <stdio.h>

void funcion (int opcion);
int seleccion;

int main (){
printf ("Por favor ingrese los valores del arreglo\n");
printf("1 imprimir arreglo, 2 salir");
scanf("%i",& seleccion);
funcion ( seleccion);
}
void funcion (int opcion){
int i,j;
int v[3][3];
for (i = 0; i<3; i++){
  for (j = 0; j<3; j++){
    printf("ingrese los valores del arreglo v[%i][%i]\n", i, j);
    scanf("%i", &v[i][j]);
}
}
if (opcion==1) {
printf("Los valores del arreglo:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        printf("%i,", v[i][j]);
        }
         printf("\n");
    }
  }
}
