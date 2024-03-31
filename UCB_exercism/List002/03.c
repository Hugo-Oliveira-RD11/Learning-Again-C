#include "stdio.h"

int main() {
  float num1, num2;
  printf("digite dois numeros aleatorios distintos:\n");
  scanf("%f", &num1);
  scanf("%f", &num2);
  if (num1 == num2) {
    printf("isso nao e permitido!!\n");
  }
  if (num1 > num2) {
    printf("%f e maior que o numero %f", num1, num2);
  }
  if (num2 > num1) {
    printf("%f e maior que o numero %f", num2, num1);
  }
  return 0;
}
