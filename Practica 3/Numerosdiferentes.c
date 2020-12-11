#include <stdio.h>
int main(){
  int a,b,c,d;

do  {
  printf("\nIngrese 4 digitos no repetidos:");
  printf("\nIngrese su primer digito" );
  scanf("%i",& a );
  printf ("Ingrese su segundo digito" );
  scanf("%i",& b );
  printf("Ingrese su tercer digito" );
  scanf("%i",& c );
  printf("Ingrese su cuarto digito" );
  scanf("%i",& d );

} while(a==b && b==c && c==d);
printf("Codigo valido");

}
