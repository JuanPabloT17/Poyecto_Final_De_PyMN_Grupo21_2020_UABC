#include <stdio.h>

int main(){

	int n, bin[999];
    int i = 0;
    printf("Ingresa un numero decimal: ");
    scanf("%i",&n);

    while (n != 0)
    {
          bin[i] = n % 2;
          n = n / 2;
          i++;
    }
    i--;
    printf("Binario: ");
    while (i>=0)
    {
          printf("\n%i",bin[i]);
          i--;
    }
	return 0;
}
