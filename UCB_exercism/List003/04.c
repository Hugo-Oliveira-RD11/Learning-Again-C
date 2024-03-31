#include "stdio.h"

int main() {
  float fat;
  int i = 0, j, n = 0;

  printf("digite o numero de digitos que vão ser inseridos para calcular o "
         "fatorial\n");
  scanf("%d", &n);
  int vetor[n];
  while (i < n) {
    printf("digite um dos valores a ser calculado o fatorial, sendo eles "
           "inteiro positivo\n");
    scanf("%d", &vetor[i]);
    i++;
  }
  for (int i = 0; i < n; i++) {
    fat = 1;
    for (j = vetor[i]; j > 1; j--) {
      fat = fat * j;
    }
    printf("\n-------------------------------\n");
    printf(" | %.2f | ", fat);
  }
  return 0;
}
