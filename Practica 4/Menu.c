#include<stdio.h>
 #include <stdlib.h>
#include <time.h>
 int opcion;
 int i,j;
 int v[6],u[10];
int w[3],suma=0,x;

 int main(){

 	printf("----VECTORES Y MATRICES----\n");
	printf("-----MENU----\n");
  printf("Bienvenido, por favor elija una opcion a realiza\n");
 	printf("1.-Construccion de dos vectores\n");
 	printf("2.-Generacion de dos vectores con elementos aleatorios\n");
 	printf("3.-Suma de dos vectores\n");
 	printf("4.-Suma de elemnetos de un vector.\n");
 	printf("5.-Construccion de matriz\n");
 	printf("6.-Generacion de matriz con elementos aleatorios\n");
 	printf("7.- Suma de matrices.\n");
 	printf("8.-Multiplicacion de matriz\n");
    printf("Seleccionar una opcion");
    scanf("%i", &opcion );

    switch (opcion){
    	//----------------------------------------------------------------------
    	case 1:{

        for (i = 0; i<6; i++){
          printf ("introduce un valor para el vector 1:");
          scanf("%i",&v[i]);
        }

        printf("\n\n");
        for (j= 0; j<10; j++){
        printf ("introduce un valor para el vector 2:");
        scanf("%i",&u[j]);
        }

          for (i = 0; i<6; i++){
            printf("Valor %i del vector 1 v=%i\n",i,v[i]);

          }
          for (j = 0; j<10; j++){
            printf("Valor %i del vector 2 v=%i\n",j,u[j]);
        }

			break;
		}
		case 2:{
      for (i = 0; i<3; i++){

         v[i]=rand() % 100;

      }

      printf("\n\n");
      for (j= 0; j<3; j++){

      u[j]=rand() % 100;
      }

        for (i = 0; i<3; i++){
          printf("Valor %i del vector 1 v=%i\n",i,v[i]);

        }
        for (j = 0; j<3; j++){
          printf("Valor %i del vector 2 v=%i\n",j,u[j]);
      }


			break;
		}
		case 3:{
  w[i]=0;
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
      w[i]=v[i]+u[i];

      printf("El resultado de la suma del vector v y u es\n");
      for(i=0; i<3; i++)
      {
          printf("Valor %i del vector w es =%i\n",i, w[i]);
      }
}
			break;
		case 4:{
          for(i=0; i<3; i++)
          {
             suma=suma+v[i];
          }
      }
          int v[3], i, suma;
          for(i=0; i<3; i++)
          {
          printf("ingrese los valores del vector:", i);
          scanf("%i", &v[i]);
          }
          suma= v[3];
          printf("La suma de los valores del vector es: %i", suma);
			break;

		case 5:{
int v[3][3];
      for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
          printf("ingrese los valores del arreglo v[%i][%i]\n", i, j);
          scanf("%i", &v[i][j]);
      }
      }

      printf("Los valores del arreglo:\n");
          for(i=0; i<3; i++)
          {
              for(j=0; j<3; j++)
              {
              printf("%i,", v[i][j]);
              }
               printf("\n");
          }
			break;
		}
		case 6:{
      int v[3][3];
      for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
          v[i][j]=rand() % 1000;
      }
      }

      printf("Los valores del arreglo:\n");
          for(i=0; i<3; i++)
          {
              for(j=0; j<3; j++){
              printf("%i,", v[i][j]);
              }
               printf("\n");
          }
        }


			break;

		case 7:{
      int w[2][2];
        int v[2][2];
        int u[2][2];
      for(i=0; i<2; i++)
      {
        for(j=0; j<2; j++)
        {
         w[i][j]=v[i][j]+u[i][j];
      }
  }
      for(i=0; i<2; i++)
      {
        for(j=0; j<2; j++)
        {
      v[i][j]=rand() % 10;

      }
    }
      for(i=0; i<3; i++)
      {
        for(j=0; j<2; j++){
          u[i][j]=rand() % 10;
        }
      }
      ;
      printf("La suma de dos matices aleatorias es:\n");
      for(i=0; i<2; i++)
      {
        for(j=0; j<2; j++)
        {
          printf("%i,", w[i][j]);

          }
           printf("\n");
      }
  }

			break;

		case 8:{
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


			break;
		}
		default: {

			break;
		}
}
}
