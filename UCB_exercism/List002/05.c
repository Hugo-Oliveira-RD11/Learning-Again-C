#include "stdio.h"
int main() {
  float A, B, C, D, temp;
  printf("digite tres numeros necessariamente em ordem:\n");
  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);
  printf("digite um numero aleatorio:\n");
  scanf("%f", &D);

  if (D > A) {
    temp = D;
    D = A;
    A = temp;
  }
  if (D > B) {
    temp = D;
    D = B;
    B = temp;
  }
  if (D > C) {
    temp = D;
    D = C;
    C = temp;
  }
  printf("a ordem decrescente e %.2f, %.2f, %.2f e %.2f", A, B, C, D);
  return 0;
}
