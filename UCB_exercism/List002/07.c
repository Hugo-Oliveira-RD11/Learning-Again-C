#include "stdio.h"

int main() {
  float A, B, C, temp;
  int I;
  printf("digite uma das opcoes a baixo\n1 - Ordem crescente\n2 - Ordem "
         "decrescente\n3 - o maior fica no meio");
  scanf("%d", &I);
  printf("digite tres numeros diferentes\n");
  scanf("%f", &A);
  scanf("%f", &B);
  scanf("%f", &C);
  switch (I) {
  case 1:
    if (A > B) {
      temp = B;
      B = A;
      A = temp;
    }
    if (B > C) {
      temp = C;
      C = B;
      B = temp;
    }
    if (A > C) {
      temp = A;
      A = C;
      C = temp;
    }
    temp = 0;
    printf("a ordem e %.2f, %.2f e %.2f", A, B, C);
    break;

  case 2:
    if (A < B) {
      temp = B;
      B = A;
      A = temp;
    }
    if (B < C) {
      temp = C;
      C = B;
      B = temp;
    }
    if (A < C) {
      temp = A;
      A = C;
      C = temp;
    }
    temp = 0;
    printf("a ordem e %.2f, %.2f e %.2f", A, B, C);
    break;
  case 3:
    if (A > B && A > C)
      printf("a ordem e %.2f, %.2f e %.2f", B, A, C);
    if (A < B && C < B)
      printf("a ordem e %.2f, %.2f e %.2f", A, B, C);
    if (C > B && C > A)
      printf("a ordem e %.2f, %.2f e %.2f", A, C, B);
    else
      printf("nada");
    break;
  }

  return 0;
}
