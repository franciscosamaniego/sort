#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int a[], int i, int j) {
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void order_arr(int a[], int n) {
  for(int i = 1; i < n; i++) {
    for(int j = 0; j < i; j++) {
      if(a[i] < a[j]) swap(a,i,j);
    }
  }
}

int terna(int a[], int n) {
  int i = 0;
  int count = 0;
  while(i < n-2) {
    int j = i+1;
    int k = n-1;
    while(j < k) {
      if(a[i] + a[j] + a[k] == 0) {
        printf("%d %d %d\n", a[i], a[j], a[k]);
        count++;
        j++;
        k--;
      }
      else if(a[i] + a[j] + a[k] > 0) k--;
      else if(a[i] + a[j] + a[k] < 0) j++;
    }
    i++;
  }
  return count;
}

void print_arr(int a[], int n){
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void make_arr(int a[], int n) {
  for(int i = 0; i < n; i++) {
    a[i] = rand() % 10 - 5;
  }
}

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int a[n];
  make_arr(a,n);
  print_arr(a,n);
  order_arr(a,n);
  print_arr(a,n);
  printf("%d\n", terna(a,n));
  return 0;
}
