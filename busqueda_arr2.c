#include <stdio.h>
#include <stdlib.h>

int binary_search_array(int a[],int k, int lo, int hi) {
  int mid = 0;
  for(int i = 0; i <= mid; i++) {
      if(hi - lo == 1 && a[lo+1] != k) return -1;
      else if(hi - lo == 1) return lo + 1;
      mid = lo + (hi - lo) / 2;
    if(a[mid] >= k)
      hi = mid;
    else
      lo = mid;
    }
  return mid;
}

// int brute_force_search(int a[], int length, int k) {
//   for(int i = 0; i < length; i++)
//     if(a[i] == k) return i;
//     return -1;
// }

void print_arr(int a[], int n) {
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main(int argc, char * argv[]) {
  int n = atoi(argv[1]);
  int k = atoi(argv[2]);
  int a[n];
  for(int i = 0; i < n; i++) {
    a[i] = 2*i;
  }
  print_arr(a,n);
  printf("%d\n", binary_search_array(a,k,0,n-1));
  return 0;
}
