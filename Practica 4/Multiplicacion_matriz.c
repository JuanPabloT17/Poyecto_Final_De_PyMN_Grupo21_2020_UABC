#include <stdio.h>
#include <stdlib.h>
int v[5][5], u[5][5], w[5][5];
int Filas_v, Col_v, Filas_u, Col_u;
void Matriz_v ()
{
  int i, j;
  printf ("Matriz V \n");
  for (i=0; i<Filas_v; i++)
    {
      for (j=0; j<Col_v; j++)
    	{
	      printf ("Por favor ingrese los valores de la matriz v[%i][%i]\n", i, j);
	      scanf ("%i", &v[i][j]);
    	}
    }
}
void Matriz_u ()
{
  int i, j;
  printf ("Matriz U\n");
  for (i=0; i<Filas_u; i++)
    {
      for (j=0; j<Col_u; j++)
    	{
	      printf ("Por favor ingrese los valores de la matriz u[%i][%i]\n", i, j);
	       scanf ("%i", &u[i][j]);
    	}
    }
}
void Imprimir_matriz (int x[5][5], char letra, int filas, int columnas)
{
  int i, j;
  printf ("Los valores del arreglo %c son:\n", letra);
  for (i=0;i<filas; i++)
    {
      for (j=0; j<columnas; j++)
	{
	  printf ("%i, ", x[i][j]);
	}
      printf ("\n");
    }
}
void Multiplicacion ()
{
  int i, j, h, suma=0;
  for (i=0; i<Col_u; i++)
    {
      for (j=0; j<Filas_v; j++)
	   {
              suma=0;
	      for(h=0; h<Col_v; h++)
	      {
	      suma=suma+(v[i][h]*u[h][j]);
	      }
       w[i][j]= suma;
	  }
    }
}
int main (){
    printf("Numero de filas de la matriz v");
    scanf("%i",&Filas_v);
    printf("Numero de columnas de la matriz v");
    scanf("%i",&Col_v);
    printf("Numero de filas de la matriz u");
    scanf("%i",&Filas_u);
    printf("Numero de columnas de la matriz  u");
    scanf("%i",&Col_u);
    if(Col_v==Filas_u){
       Matriz_v();
       Matriz_u();
       Imprimir_matriz (v, 'v', Filas_v, Col_v);
       Imprimir_matriz (u, 'b', Filas_u, Col_u);
       Multiplicacion();
       Imprimir_matriz (w, 'c', Col_u,Filas_v);
    }
    else
    printf("Error no se pueden multiplicar\n");
  return 0;
}
