#include "stdio.h"

int main() {
  float A, B, C, temp;
  printf("digite tres numeros\n");
  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);
  if (B > C) {
    temp = B;
    B = C;
    C = temp;
    /*B<C*/
  }
  if (A > C) {
    temp = A;
    A = C;
    C = temp;
    /*A<C*/
  }
  if (A > B) {
    temp = B;
    A = B;
    A = temp;
    /*A<B*/
  }
  printf("a ordem crescente e %.2f, %.2f e %.2f", A, B, C);
}
