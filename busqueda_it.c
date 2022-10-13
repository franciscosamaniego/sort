#include <stdio.h>
#include <stdlib.h>

int binary_search_array(int a[],int n, int s) {
  int lo = 0;
  int hi = n;
  while(hi-lo > 1) {
    int mid = (lo+hi)/2;
    if(a[mid] > s)
    hi = mid;
    else
    lo = mid;
  }
  return lo;
}

// int brute_force_search(int a[], int length, int k) {
//   for(int i = 0; i < length; i++)
//     if(a[i] == k) return i;
//     return -1;
// }

// void print_arr(int a[], int n) {
//   for(int i = 0; i < n; i++) {
//     printf("%d ", a[i]);
//   }
//   printf("\n");
// }

int main(int argc, char * argv[]) {
  int list[] = {1,2,3,6,9,10,12,28};
  int n = atoi(argv[1]);
  printf("%d\n", binary_search_array(list,8,n));
  return 0;
}
