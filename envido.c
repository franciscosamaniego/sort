#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
  return a >= b ? a : b;
}

int val(int card) {
  if(card < 10) return card;
  return 0;
}

int envido(int n1, char p1, int n2, char p2, int n3, char p3) {
  if(p1 != p2 && p2 != p3)
    return max(max(val(n1),val(n2)),val(n3));
  if(p1 == p2 && p2 == p3)
    return max(val(n1) + val(n3), max(val(n1) + val(n2), val(n2) + val(n3))) + 20;
  if(p1 == p2)
    return val(n1) + val(n2) + 20;
  if(p2 == p3)
    return val(n2) + val(n3) + 20;
  if(p1 == p3)
    return val(n1) + val(n3) + 20;
}


int main(int argc, char const *argv[]) {
  int n1 = atoi(argv[1]);
  char p1 = argv[2][0];
  int n2 = atoi(argv[3]);
  char p2 = argv[4][0];
  int n3 = atoi(argv[5]);
  char p3 = argv[6][0];
  printf("%d\n", envido(n1,p1,n2,p2,n3,p3));
  return 0;
}
