#include <stdio.h>

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
int v[6],u[10];
for (i = 0; i<6; i++){
  printf ("introduce un valor para el vector 1:");
  scanf("%i",&v[i]);
}

printf("\n\n");
for (j= 0; j<10; j++){
printf ("introduce un valor para el vector 2:");
scanf("%i",&u[j]);
}
if (opcion==1) {
  for (i = 0; i<6; i++){
    printf("Valor %i del vector 1 v=%i\n",i,v[i]);

  }
  for (j = 0; j<10; j++){
    printf("Valor %i del vector 2 v=%i\n",j,u[j]);
}
}
}
