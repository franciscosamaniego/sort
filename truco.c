#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


void figura (int *a, int *b, int *c){
  if(*a >= 10) *a = 0;
  if(*b >= 10) *b = 0;
  if(*c >= 10) *c = 0;
}

int maxi(int a, int b) {
  return a >= b ? a : b;
}

int envido(int a, char d, int b, char e, int c, char f) {
  figura(&a,&b,&c);
  int res = 0;
  if(d == e) res = a + b + 20;
  else if (e == f) res = b + c + 20;
  else if (d == f) res = a + c + 20;
  if(d == f && e == f) {
     res = maxi(a+c, maxi(a+b,c+b)) + 20;
  }
  if(d != f && f != e) return maxi(maxi(a,b),c);
    return res;
  }

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[3]);
  int c = atoi(argv[5]);
  char d = argv[2][0];
  char e = argv[4][0];
  char f = argv[6][0];
    int res = envido(a,d,b,e,c,f);
    printf("%d\n", res);
  return 0;
}
