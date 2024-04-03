#include "stdio.h"

int main() {
  int soma, n1, n2, n3, n4;
  printf("escreva 4 numeros para soma\n");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  soma = n1 + n2 + n3 + n4;

  printf("a soma e %d", soma);
  return 0;
}
