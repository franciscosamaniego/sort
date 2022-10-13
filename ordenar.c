#include <stdio.h>

void swap(int a[], int b, int c) {
  int temp = a[b];
  a[b] = a[c];
  a[c] = temp;
}

void order(int a[], int n) {
  for(int i = 1; i < n; i++) {
    for(int j = i; j > 0; j--) {
      if(a[j] < a[j-1]) swap(a,j,j-1);
      else              break;
    }
  }
}

void print_arr(int a[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char *argv[]) {
  int a[] = {1,4,5,3,6,2,7};
  print_arr(a,7);
  order(a,7);
  print_arr(a,7);
  return 0;
}
