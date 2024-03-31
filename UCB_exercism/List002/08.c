#include "math.h"
#include "stdio.h"

int main() {
  int op;
  printf("Somar dois numeros\nRaiz quadrada de um numero\nDigite a opcao "
         "desejada ->: ");
  scanf("%d", &op);

  switch (op) {
  case 1:
    printf("digite dois numeros para a soma\n");
    float A, B;
    scanf("%f", &A);
    scanf("%f", &B);
    printf("a soma e de %.2f", (A + B));
    break;
  case 2:
    printf("digite um numero a operaçao de raiz quadrada:\n");
    float C;
    scanf("%f", &C);
    printf("a raiz quadrada e %.2f", sqrtf(C));
  }
  return 0;
}
