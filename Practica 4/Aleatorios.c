#include <stdio.h>
#include <stdlib.h>

void funcion (int opcion);
int seleccion;

int main (){
printf ("Se generaran dos vectores\n");
printf("1 imprimir vectores, 2 salir");
scanf("%i",& seleccion);
funcion ( seleccion);
}
void funcion (int opcion){
int i,j;
int v[3],u[3];
for (i = 0; i<3; i++){

   v[i]=rand() % 100;

}

printf("\n\n");
for (j= 0; j<3; j++){

u[j]=rand() % 100;
}
if (opcion==1) {
  for (i = 0; i<3; i++){
    printf("Valor %i del vector 1 v=%i\n",i,v[i]);

  }
  for (j = 0; j<3; j++){
    printf("Valor %i del vector 2 v=%i\n",j,u[j]);
}
}
}
