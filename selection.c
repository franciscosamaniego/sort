#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void swap(int a[], int i, int j, int min) {
  int temp = a[i];
  a[i] = min;
  a[j] = temp;
}

void selec(int a[], int n) {
  for(int i = 0; i < n-1; i++) {
    int min = INT_MAX;
    int cont;
    for(int j = i; j < n; j++ ) {
      if(a[j] < min) {
        min = a[j];
        cont = j;
      }
    }
    swap(a,i,cont,min);
  }
}

void printarr(int a[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {4,2,3,1,5,1,6,7};
  printarr(a,8);
  selec(a,8);
  printarr(a,8);
  return 0;
}
