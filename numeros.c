#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//imprime una cadena de divisores
//y su suma
//si hay muchas cadenas de divisores imprime
//la que tiene suma maxima
//ejemplo:
//60 - 30 - 15 - 5 - 1 ----> suma = 111

void cadena(int n) {
  int suma = n;
  printf("%d ", n);
  int i = 2;
  while (n != 1) {
    if(n % i == 0) {
      printf("%d ", n / i);
      n /= i;
      suma += n;
    }
    else
      i++;
  }
  printf("\n");
  printf("Suma: %d\n", suma);
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  cadena(n);
  return 0;
}
