#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pares(int a[], int length) {
  int cont = 0;
  for(int i = 0; i < length; i++) {
    for(int j = 0; j < length; j++) {
      if(a[i] != a[j] && a[i] + a[j] == 0) cont++;
    }
  }
  return cont;
}

void rand_arr(int a[], int n) {
  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    a[i] = (rand() % 100 + 1) - 50;
  }
}

void print_arr(int a[], int n) {
  for(int i = 0; i< n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a[n];
  rand_arr(a,n);
  print_arr(a,n);
  printf("%d\n", pares(a,n));
  return 0;
}
