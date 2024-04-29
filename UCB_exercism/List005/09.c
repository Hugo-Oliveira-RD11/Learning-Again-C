#include "stdio.h"
#define LIM 5

void Input_array(int a[LIM]) {
  for (int i = 0; i < LIM; i++) {
    printf("digite um numero para a posicao %d", i);
    scanf("%d", a[i]);
  }
}

int main() {
  int a[LIM], b[LIM], c[LIM * 2];

  Input_array(a);
  Input_array(b);

  return 0;
}
