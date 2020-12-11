#include <stdio.h>
#include <stdlib.h>
int w[2][2];
void suma(int v[2][2], int u[2][2]){
    int i,j;
    for(i=0; i<2; i++)
    {
      for(j=0; j<2; j++)
      {
       w[i][j]=v[i][j]+u[i][j];
    }
}
}
int main(){
    int v[2][2], i,j;
    int u[2][2];
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
    suma(v,u);
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
