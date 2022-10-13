// #include <stdio.h>
//
// int binary_search(int lo, int hi) {
//   if(hi - lo == 1) return lo;
//   int mid = lo + (hi - lo) / 2;
//   printf("Igual o mas grande que %d? s/n\n", mid);
//   char response;
//   scanf("%c", &response);
//   getchar();
//   if(response == 'n')
//     return binary_search(lo,mid);
//   else
//     return binary_search(mid,hi);
// }
//
//
// int main(void) {
//   printf("Pensa en un numero de 0 a 1023\n");
//   printf("Listo? Presiona enter\n");
//   getchar();
//   int guess = binary_search(0,1023);
//   printf("Tu numero es %d\n", guess);
//   return 0;
// }

#include <stdio.h>

int binary_search(int lo, int hi) {
  int length = hi;
  for(int i = 0; i < hi; i++) {
    if(hi - lo == 1) return lo;
  int mid = lo + (hi - lo) / 2;
  printf("Igual o mas grande que %d? s/n\n", mid);
  char response;
  scanf("%c", &response);
  getchar();
    if(response == 'n')
    hi = mid;
  else
    lo = mid;
  }
}


int main(void) {
  printf("Pensa en un numero de 0 a 1023\n");
  printf("Listo? Presiona enter\n");
  getchar();
  int guess = binary_search(0,1023);
  printf("Tu numero es %d\n", guess);
  return 0;
}
