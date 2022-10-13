#include <stdio.h>
#include <stdlib.h>

// void swap(int a[], int i, int j) {
//   int temp = a[i];
//   a[i] = a[j];
//   a[j] = a[i];
// }

void bubble(int a[], int n) {
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < n-1; j++) {
      if(a[j] > a[j+1]) {
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}

void printarr(int a[], int n){
  printf("[ ");
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("]\n");
}

int main(int argc, char *argv[]) {
  int a[] = {5,3,4,1};
  printarr(a,4);
  bubble(a,4);
  printarr(a,4);
  return 0;
}
